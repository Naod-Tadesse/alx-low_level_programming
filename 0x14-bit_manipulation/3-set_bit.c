#include "main.h"
#include <stdlib.h>

/**
 * set_bit - set bit 1 at a given index
 * @n: pointer to the number
 * @index: index of the number
 * Return: 1 always if success, -1 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
