#include "lists.h"

/**
 * dlistint_len - counts no of elements in
 *               a doubly linked list
 *
 * @h: the doubly linked list
 *
 * Return: No of elements in the DLL
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
