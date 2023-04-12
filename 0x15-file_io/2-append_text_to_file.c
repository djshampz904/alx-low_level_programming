#include "main.h"

/**
 * append_text_to_file - append text to end of file
 * @filename: pointer to the file
 * @text_content: text to append
 * Return: 1 or 0
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t len;

	len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		bytes_written = write(fd, text_content, len);
		if (bytes_written < 0)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
