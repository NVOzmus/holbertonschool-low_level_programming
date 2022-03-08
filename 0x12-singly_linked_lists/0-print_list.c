#include "lists.h"
/**
 *  print_list - function prints list
 *  @h: variable
 * Return: number of nodes, else nil
 */

size_t print_list(const list_t *h)
{
	size_t index = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			index++;
			h = h->next;
		}
	}
	return (index);
}
