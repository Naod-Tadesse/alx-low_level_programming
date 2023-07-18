#include "main.h"

/**
 * _isalpha- checks if given character is alphabet
 *@c: the character to check
 * Return: 1 if c is alphabet, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') | (c >= 'A' && c <= 'Z'));
}
