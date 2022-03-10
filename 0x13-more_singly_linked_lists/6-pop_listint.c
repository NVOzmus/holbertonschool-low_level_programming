#include "lists.h"

/**
 * pop_listint - program startup
 * @head: list being evaluated
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
