#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to start of the list
 *
 * Return: n member of the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = *head->next;
	n = *head->n;

	free(temp);
	temp = NULL;

	return (n);
}
