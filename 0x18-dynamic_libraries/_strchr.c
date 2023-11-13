/**
 * _strchr - pointer to first occerence
 * @s: str
 * @c: char
 * Return: ptr to first occcurence of c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}

