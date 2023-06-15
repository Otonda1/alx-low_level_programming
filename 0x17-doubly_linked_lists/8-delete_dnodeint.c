#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes DLL node at index
 * @head: head pointer
 * @index: the target node's index
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	while (i < index)
	{
		temp = temp->next;
		i++;
		if (temp == NULL)
			return (-1);
	}
	if (temp->next == NULL)
		temp->prev->next = NULL;
	else
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
