#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character to the stdout
 * @c: the letter to print
 * Return: On success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

