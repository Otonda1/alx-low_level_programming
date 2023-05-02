#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given index
 * @head: pointer to head pointer
 * @idx: provided index
 * @n: data of new node
 * Return: pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	temp = *head;
	if (idx != 0)
	{
		for (i = 1; i < idx && temp != NULL; i++)
			temp = temp->next;
		if (temp == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = temp->next;
		temp->next = new_node;
	}
	else if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
