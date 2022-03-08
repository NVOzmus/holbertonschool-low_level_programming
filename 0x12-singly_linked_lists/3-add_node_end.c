#include "lists.h"

/**
 * add_node_end - function to add node at the end of file
 * @head: variable to account for head
 * @str: variable to account for str
 * Return:address of new element, or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *strcopy;
	list_t *new_node, *last_node;
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
       new_node->next = NULL;

       if (*head == NULL)
	       *head = new_node;
       else
       {
	       last_node = *head;
	       while (last_node->next != NULL)
		       last_node = last_node->next;
	       last_node->next = new_node;
       }
       return (*head);
}
