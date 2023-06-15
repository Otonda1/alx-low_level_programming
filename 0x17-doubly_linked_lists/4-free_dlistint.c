#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 *
 * @head: pointer to the DLL
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *check;

	temp = head;
	while (temp != NULL)
	{
		check = temp->next;
		free(temp);
		temp = check;
	}
}
