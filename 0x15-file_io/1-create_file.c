#include "main.h"

/**
 * @filename: points to the name of the file to create.
 * the sript below is a function that creates a file.
 * create_file - Creates a file with a given filename.
 * @text_content1: points to a string that is to be written to the file.
 * @fj - a variable
 *
 * Return: If the function fails it returns - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content1)
{
	int fj, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content1 != NULL)
	{
		for (len = 0; text_content1[len];)
			len++;
	}

	fj = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fj, text_content1, len);

	if (fj == -1 || w == -1)
		return (-1);

	close(fj);

	return (1);
}
