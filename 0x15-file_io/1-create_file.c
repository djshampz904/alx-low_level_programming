#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to file
 * @text_content: string to check
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len, written;

	len = 0;
	if (!filename)
		return (-1);

	if (text_content)
		while (text_content[len])
			len++;
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
	written = write(fd, text_content, len);
		if (written != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
