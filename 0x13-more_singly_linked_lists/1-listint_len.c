#include "lists.h"

/**
 * listint_len - finds length of linked list
 * @h: head pointer
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != 0)
	{
		h = h->next;
		n++;
	}
	return (n);
}
