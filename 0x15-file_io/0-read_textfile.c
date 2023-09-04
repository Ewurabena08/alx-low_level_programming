#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- this reads a text file print to STDOUT.
 * @letters: number of letters to be read.
 *
 * @filename: the text file being read.
 * Return: returns the actual number of letters
 * it could reads and print.
 *
 * returns 0 when function fails or filename is NULL.
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
