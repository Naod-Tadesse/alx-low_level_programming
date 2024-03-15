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
	size_t i = 0;

	if (array != NULL)
	{
		while (i < size)
		{
			printf("Value checked array[%li] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
