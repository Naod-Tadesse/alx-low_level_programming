/**
 * _strncpy - this functions copies string up to n values
 * @dest: destination
 * @src: source
 * @n: number
 * Return: destination(dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
