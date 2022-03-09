#include "lists.h"

/**
 * free_listint - function to free listint node
 * @head: variable to recognize the head
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
