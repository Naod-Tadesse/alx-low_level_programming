#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower_case_alphabet;

	for (lower_case_alphabet = 'a'; lower_case_alphabet <= 'z';
	     lower_case_alphabet++)
	{
		if (lower_case_alphabet != 'q' && lower_case_alphabet != 'e')
		{
			putchar(lower_case_alphabet);
		}
	}
	putchar('\n');

	return (0);
}

