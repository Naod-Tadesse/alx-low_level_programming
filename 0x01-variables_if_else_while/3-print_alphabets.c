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
	char upper_case_alphabet;
	char lower_case_alphabet;

	for (lower_case_alphabet = 'a'; lower_case_alphabet <= 'z';
	     lower_case_alphabet++)
	{
		putchar(lower_case_alphabet);
	}
	for (upper_case_alphabet = 'A'; upper_case_alphabet <= 'Z';
	     upper_case_alphabet++)
	{
		putchar(upper_case_alphabet);
	}

	putchar('\n');

	return (0);
}

