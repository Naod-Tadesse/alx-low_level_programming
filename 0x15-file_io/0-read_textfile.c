#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - this function Reads a text file and prints it to POSIX.
 * @filename: A points to the name of the file.
 * @letters: The number of letters to read and print.
 *
 * Return: If the function fails or NULL 0 |no of byte can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *data_buffer;

	if (filename == NULL)
	{
		return (0);
	}

	data_buffer = malloc(sizeof(char) * letters);
	if (data_buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, data_buffer, letters);
	w = write(STDOUT_FILENO, data_buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(data_buffer);
		return (0);
	}

	free(data_buffer);
	close(o);

	return (w);
}
