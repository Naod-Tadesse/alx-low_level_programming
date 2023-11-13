/**
 * _isalpha- if given char is alphabet
 * @c: given character
 * Return: if alphabet 1
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') | (c >= 'A' && c <= 'Z'));
}

