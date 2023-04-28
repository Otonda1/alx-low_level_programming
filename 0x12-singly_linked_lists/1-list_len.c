#include "lists.h"

/**
 * list_len - finds no of elements in linked list
 * @h: points to head node
 *
 * Return: no. of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
