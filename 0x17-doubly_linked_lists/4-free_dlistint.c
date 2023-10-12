#include "lists.h"

/**
 * free_dlistint - frees a list.
 * @head: head pointer.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
