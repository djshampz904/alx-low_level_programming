#include "main.h"

/**
 * read_textfile - read a textfile
 * @filename: name of file
 * @letters: number of letters
 * Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, write_bytes, read_bytes;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(letters * sizeof(char));
	if (buff == NULL)
		return (0);
	read_bytes = read(fd, buff, letters);
	if (read_bytes < 0)
	{
		close(fd);
		free(buff);
		return (0);
	}
	write_bytes = write(STDOUT_FILENO, buff, read_bytes);
	if (write_bytes < 0 || write_bytes != read_bytes)
	{
		close(fd);
		free(buff);
		return (0);
	}

	close(fd);
	free(buff);
	return (read_bytes);
}
