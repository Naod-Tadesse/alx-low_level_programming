#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, len, len1;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	char tmpo[len];
	int j = 0;

	j = len1

	for (i = 0; i < len; i--)
	{
		tmpo[j]	= s[i]
		j--;
	}
	s = tmpo;
}
