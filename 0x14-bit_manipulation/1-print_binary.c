#include "main.h"

/**
 * print_binary - prints binary form of unsigned long integer
 * @n: the number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int val;
	int i, counter = 0;

	for (i = 63; i >= 0; i--)
	{
		val = n >> i;

		if (val & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
