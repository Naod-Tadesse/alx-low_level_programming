#include "main.h"

/**
 * _puts - a function that prints a string, followed by new line
 *
 * @str: pointer to sthe string to print
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
