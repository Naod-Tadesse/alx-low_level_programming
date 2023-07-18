#include "main.h"

/*
 * print_sign - prints the sign of given number
 * @n: the the integer number to check
 * Return: -1 and print s - if number is less than zero
 * 0 and prints 0 if number is zero
 * -1 and prints - if n is less than zero
 */

int print_sing(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
