#include "function_pointers.h"

/**
 * array_iterator - executes a function given as
 *		parameter on each element of an array
 * @array: said array
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
