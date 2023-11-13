#include "main.h"
/**
 * _memcpy - copies n bytes
 * @dest: destination
 * @src: source
 * @n: number
 * Return: ptr to n
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
