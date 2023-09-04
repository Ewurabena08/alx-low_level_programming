#include "main.h"

/**
 * append_text_to_file – This appends text at the end of the file.
 * @filename: This points to the name of the file.
 *
 * @text_content: This is string to add to the end of the file.
 * Return: 1 on success and -1 on failure.
 *
 * If the file does not exist the user lacks write permissions - -1,
 * Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, lenn = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenn = 0; text_content[lenn];)
			lenn++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, lenn);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
