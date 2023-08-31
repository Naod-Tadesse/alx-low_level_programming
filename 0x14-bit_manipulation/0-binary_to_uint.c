#include "main.h"

/**
 * binary_to_uint - uses to convert binary to unsigned int
 * @b: the binary number argument
 * Return: the converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		value = 2 * value + (b[i] - '0');
	}
	return (value);
}
