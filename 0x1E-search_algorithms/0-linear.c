#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - performs linear search on an array
 * @array: pointer to array
 * @size: size of array
 * @value: value to search
 * Return: 0 on success, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]", i, array[i]);
		printf("\n");
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
