#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to a struct.
 */
void free_listint2(listint_t **head)
{
	while ((*head)->next != NULL)
	{
		free(*head);
		*head = (*head)->next;
	}
	free(*head);
	*head = NULL;
}
