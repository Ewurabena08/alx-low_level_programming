#include "main.h"
#include <stdlib.h>

/**
 * a function that reads a text file and prints it to the POSIX standard output.
 * @letters: the number of letters which are to be read
 * read_textfile- Read a text file to be printed to STDOUT.
 * @filename: text file being read
 * Return: w- actual number of bytes read and it prints
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
