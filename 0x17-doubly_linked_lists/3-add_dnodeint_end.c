#include "lists.h"

/**
 * add_dnodeint_end - adds node at end of DLL
 *
 * @head: pointer to the DLL
 * @n: data part of the node to be added
 *
 * Return: pointer to new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *newnode;

	temp = *head;
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		newnode->next = NULL;
		newnode->prev = NULL;
		newnode->n = n;
		*head = newnode;
		return (newnode);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	newnode->prev = temp;
	newnode->next = NULL;
	newnode->n = n;

	return (newnode);
}
