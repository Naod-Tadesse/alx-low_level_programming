#include "main.h"

/**
 * _islower - checks if given character is lower case
 *@c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') | (c >= 'A' && c<='Z'));
}