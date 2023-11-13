#include "main.h"
/**
 * _memset - fills with constant byte b
 * @s: source
 * @b: byet
 * @n: number
 * Return: new vaue
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
