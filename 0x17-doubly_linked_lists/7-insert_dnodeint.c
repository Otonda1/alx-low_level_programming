#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at given index
 * @h: Head pointer to DLL
 * @idx: target index
 * @n: data of target node
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int i = 0, len = len_node(h);

	if (idx == 0)
		return (add_dnodeint(h, n));
	temp = *h;
	while (temp)
	{
		if (i == idx - 1)
			break;
		else if (i < idx - 1 && temp == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
	if (len == idx)
		return (add_dnodeint_end(h, n));
	else if (len < idx)
		return (NULL);
	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	temp->next = new;
	new->next->prev = new;

	return (new);
}

/**
 * len_node - finds length of DLL
 *
 * @node: pointer to DLL
 * Return: size of DLL
 */
unsigned int len_node(dlistint_t **node)
{
	unsigned int len = 0;
	dlistint_t *temp;

	temp = *node;
	while (temp != NULL)
	{
		len += 1;
		temp = temp->next;
	}
	return (len);
}
