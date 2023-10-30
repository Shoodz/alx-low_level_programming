#include "main.h"

/**
 * read_textfile - reads text from a file and prints it.
 * @filename: name of the file to be read.
 * @letters: number of bytes to be read.
 *
 * Return: number of bytes to be read\printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(fikename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close (fd);
	return (bytes);
}
