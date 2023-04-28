#include "lists.h"

/**
 * free_list - frees up malloc'ed space for linked list
 * @head: pointer to the list
 * Return: nothing
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}

