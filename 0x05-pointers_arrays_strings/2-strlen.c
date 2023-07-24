#include "main.h"
#include <stdio.h>

/**
 * _strlen - takes string and returns the length of the string
 *
 * @s: the variable that strlen receives
 *
 * Return: the length of the string
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
