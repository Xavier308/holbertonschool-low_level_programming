#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - Creates a file and writes a text to it
 * @filename: The name of the file to create
 * @text_content: A NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file cannot be created,
 * cannot be written, etc.)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0, written;

	if (!filename)
		return (-1);

	/* Open file with appropriate permissions, create if doesn't exist */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* If text_content is not NULL, calculate its length */
	if (text_content)
	{
		while (text_content[len])
			len++;
	}

	/* Write text_content to file */
	written = write(fd, text_content, len);
	if (written == -1 || written != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
