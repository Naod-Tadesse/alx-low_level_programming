/**
 *_strpbrk - locates the first occurence of string
 *@s: the string
 *@accept: search bytes
 *Return: ptr to byte that matches accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}

	return ('\0');
}
