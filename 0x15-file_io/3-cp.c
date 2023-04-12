#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFERSIZE 1024

/**
 * main - copies the content of a file to another
 * @argc - argument count
 * @argv - array
 * Return: 0 or exit status
 */

int main(int argc, char *argv[])
{
	int fd_from, rd_to, read_count, write_count;
	char buff[BUFFERSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	rd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (rd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant write to %s\n", argv[2]);
		exit(99);
	}

	while ((read_count = read(fd_from, buff, BUFFERSIZE)) > 0)
	{
		write_count = write(rd_to, buff, read_count);
		if (write_count == -1 || write_count != read_count)
		{
			dprintf(STDERR_FILENO, "Error: Cant write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (read_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant close fd %d\n", rd_to);
		exit(100);
	}

	return (0);
}
