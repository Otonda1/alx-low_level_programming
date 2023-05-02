#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node to the end of the list
 * @head: double pointer
 * @n: integer
 *
 * Return: NULL if failed else pointer to the new element;
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;

		while (last->next != NULL)
			last = last->next;

		last->next = new;
	}

	return (*head);
}
