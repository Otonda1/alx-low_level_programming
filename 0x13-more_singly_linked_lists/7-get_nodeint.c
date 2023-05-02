#include "lists.h"

/**
 * get_nodeint_at_index - finds the nth node in linked list
 * @index: position of node
 * @head: head pointer
 * Return: pointer to node n
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	for (; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
