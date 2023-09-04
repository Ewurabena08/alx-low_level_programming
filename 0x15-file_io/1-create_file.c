#include "main.h"

/**
 * create_file - Creates a new file.
 * @filename: This points to the name of the file to be created.
 *
 * @text_content: This points to a string to write to the file.
 *
 * Return: If the function fails - -1,
 * Otherwise - 1.
 *
 */
int create_file(const char *filename, char *text_content)
{
	int df, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	df = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (df == -1 || w == -1)
		return (-1);

	close(df);

	return (1);
}
