#include "search_algos.h"

/**
 * linear_search - this searches for value
 * @array: the array to search the value in
 * @size: size of the array
 * @value: the value to search
 * Return: the index of the value
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array != NULL)
	{
		for (i = 0;i < (int)size; i++)
		{
			printf("value checked array[%u] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
