#include "main.h"

/**
 * get_bit - get the value of bit at index
 * @n: decimal to operate on
 * @index: index to get the value of
 * Return: the value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	val = (n >> index);
	if (index > 32)
	return (-1);
	return (val & 1);
}
