#include "lists.h"
/**
 * add_node - add new node at beginning
 * @head: variable to point to head
 * @str: string to copy
 * Return: address, or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	char *strcopy;
	list_t *new_node;
	int length = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	strcopy = strdup(str);
	if (strcopy == NULL)
	{
		free(new_node);
		return (NULL);
	}
	length = strlen(strcopy);
	new_node->str = strcopy;
	new_node->len = length;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
