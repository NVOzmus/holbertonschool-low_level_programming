#include "lists.h"
/**
 *  print_list - function prints list
 *  @h: variable
 * Return: number of nodes, else nil
 */

size_t print_list(const list_t *h)
{
	size_t len = 0;

	if (h == NULL)
		printf("[0] (nil)")
		return (0);
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
				h = h->next;
				len++;
	}
	return (len);
}
