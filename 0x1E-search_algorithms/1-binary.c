#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * binary_search - Searches for an array element using
 *		binary search algorithm
 *
 * @array: pointer to array in question
 * @size: length of array
 * @value: element to search
 *
 * Return: element index on success, -1 otherwise.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, left = 0, right = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[right]);

		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		if (array[mid] > value)
			right = mid - 1;
		else if (array[mid] == value)
			return (mid);
	}
	return (-1);
}
