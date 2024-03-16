#include "search_algos.h"

/**
 * binary_search - this searches for a value using binary search
 * @array: the array to find the value in
 * @size: size of the array
 * @value: the value to find
 * Return: returns the index
 */

int binary_search(int *array, size_t size, int value)
{
	int start = 0, end = (int)size - 1;
	int middle, j;

	if (array != NULL)
	{
		while (start <= end)
		{
			middle = (start + end) / 2;
			printf("Searching in array: ");
			for (j = start; j <= end; j++)
			{
				printf("%d", array[j]);
				if (j == end)
				{
					printf("\n");
				}
				else
				{
					printf(", ");
				}
			}
			if (array[middle] == value)
				return (middle);
			else if (array[middle] > value)
				end = middle - 1;
			else
				start = middle + 1;
		}
	}

	return (-1);
}
