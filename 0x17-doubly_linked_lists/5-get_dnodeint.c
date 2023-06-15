#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 *
 * @head: pointer to beginning of linked list
 * @index: index of target node
 * Return: address of desired node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (i < index)
	{
		head = head->next;
		i++;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
