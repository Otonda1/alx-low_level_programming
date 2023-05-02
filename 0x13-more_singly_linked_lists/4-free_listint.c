#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to the head
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
