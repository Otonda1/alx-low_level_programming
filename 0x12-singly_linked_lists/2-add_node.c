#include "lists.h"

/**
 * add_node_end - adds node at end of linked list
 * @head: points to head pointer
 * @str: string to be added
 * Return: pointer to new string
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *nav;
	size_t length;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (length = 0; str[length] != '\0'; length++)
	{
	}
	new_node->len = length;

	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	else
	{
		nav = *head;
		while (nav->next != NULL)
		{
			nav = nav->next;
		}
		nav->next = new_node;
	}
	return (new_node);
}
