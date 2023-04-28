#include "lists.h"
/**
 * print_list - prints elements in a linked list
 * @h: head pointer
 *
 * Return: no of elements in the list
 */

size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		j++;
	}
	return (j);
}
