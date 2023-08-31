#include "main.h"

/**
 * flip_bits - number of bits to flip
 * @n: the number given
 * @m: destination
 * Return: number of flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int j = sizeof(unsigned long int) * 8;
	unsigned int i, number_of_flips = 0;

	for (i = 0; i < j; i++)
	{
		if ((m & 1) != (n & 1))
			number_of_flips += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (number_of_flips);
}
