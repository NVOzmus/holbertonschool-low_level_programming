#include "lists.h"

/**
 * listint_len - lists the length integer
 * @h: variable for header
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t index = 0;

	while (h != NULL)
	{
		index++;
		h = h->next;
	}
	return (index);
}
