#include "lists.h"

/**
 * add_node - adds a node to beginning of list
 * @head: pointer to head pointer
 * @str: string to be added
 *
 * Return: pointer to new list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	size_t length = 0;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	while (str[length] != '\0')
		length++;
	ptr->len = length;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
