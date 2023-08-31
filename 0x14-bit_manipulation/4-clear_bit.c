#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - set bit 0 at a given index
 * @n: pointer to the number
 * @index: index of the number
 * Return: 1 for success, -1 for fai
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
