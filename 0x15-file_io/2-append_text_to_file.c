#include "main.h"

/**
 * append_text_to_file - Add text at the end of file.
 * @filename: points to a name of file
 * @text_content: points to the string to add at the end of file.
 *
 * Return: 1 or -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;
	int count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, count);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
