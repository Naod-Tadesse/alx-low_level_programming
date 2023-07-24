#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of array
 * @a: pointer variable that points to the array
 * @n: integer to specify how many items to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
			printf(", %d", a[i]);
		}
		printf("\n");
	}
}
