#include "main.h"
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

/* Prototype for helper functions */
int close_file(int fd);
void copy_content(int fd_from, int fd_to,
		const char *file_from, const char *file_to);

/**
 * main - Entry point, copies the content of a file to another.
 * @argc: Number of command line arguments.
 * @argv: Array of command line arguments.
 *
 * Return: 0 on success, or exits with a specific code on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	mode_t file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, file_perm);
	if (fd_to < 0)
	{
		close_file(fd_from); /* Close file descriptor if opening fd_to fails */
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	copy_content(fd_from, fd_to, argv[1], argv[2]);

	/* Close source file descriptor, print error if failed */
	if (close_file(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);

	/* Close destination file descriptor, print error if failed */
	if (close_file(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);

	return (0);
}

/**
 * copy_content - Copies content from one file to another.
 * @fd_from: File descriptor for source file.
 * @fd_to: File descriptor for destination file.
 * @file_from: Name of source file.
 * @file_to: Name of destination file.
 *
 * Description: Reads from the source file and writes to the destination file.
 */
void copy_content(int fd_from, int fd_to,
		const char *file_from, const char *file_to)
{
	int rd, wr;
	char buf[BUF_SIZE];

	while ((rd = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		wr = write(fd_to, buf, rd);
		if (wr != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
}

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to close.
 *
 * Return: 0 on success, -1 on failure, prints error message on failure.
 */
int close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		return (-1);
	}

	return (0);
}

