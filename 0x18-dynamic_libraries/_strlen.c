#include "main.h"
/**
 * _strlen - gives length of string
 * @s: character
 * Return: length
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

