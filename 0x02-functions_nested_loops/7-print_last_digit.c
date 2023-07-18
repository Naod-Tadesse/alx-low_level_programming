#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the integer  value to receive
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = -n;
		a = n % 10;
	} else if (n > 0)
	{
		a = n % 10;
	}
	_putchar(a + '0');
	return (a);
}
