#include "lists.h"

/**
 * add_node_end - function to add node at the end of file
 * @head: variable to account for head
 * @str: variable to account for str
 * Return:address of new element, or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *string;
	int length;
	list_t *new;
	list_t *end;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	string = strdup(str);
	if (string == NULL)
	{
		free(new);
		return (NULL);
	}
	for (length = 0; string[length];)
	{
		length++;
	}
	new->str = string;
	new->len = length;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
	return (*head);
}
