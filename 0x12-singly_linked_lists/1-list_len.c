#include "lists.h"

/**
 *
 *
 *
 *
 */

size_t list_len(const list_t *h)
{
	size_t index = 0;

	while (h != NULL)
	{
		index++;
		h = h->next;
	}
	return (index);
}
