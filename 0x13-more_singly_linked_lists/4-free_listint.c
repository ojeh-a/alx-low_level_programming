#include "lists.h"

/**
 * free_listint - frees a list.
 * @head: pointer to a list.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
