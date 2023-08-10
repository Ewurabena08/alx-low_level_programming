#include "main.h"
/**
 * @filename: A pointer to the name of the file.
 * @O - a variabel name.
 * append_text_to_file - Appends text at the end of the file.
 * @text_content: The string to be added to the end of a file.
 *
 * Return: If the function fails or filename is NULL it returns - -1.
 *         If the file does not exist or the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int O, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	O = open(filename, O_WRONLY | O_APPEND);
	w = write(O, text_content, len);

	if (O == -1 || w == -1)
		return (-1);

	close(O);

	return (1);
}
