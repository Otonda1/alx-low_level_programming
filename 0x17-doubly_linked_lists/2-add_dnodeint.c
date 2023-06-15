#include "lists.h"

/**
 * add_dnodeint - adds new node at beginning of
 *               doubly linked list
 *
 * @head: pointer to the DLL
 * @n: node data to be added
 * Return: pointer to new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;
	if (*head != NULL)
		(*head)->prev = newnode;
	*head = newnode;

	return (newnode);
}
