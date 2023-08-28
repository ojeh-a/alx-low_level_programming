#include <stdlib.h>
#include  "lists.h"
#include <stddef.h>

/**
 * free_list - frees a list allocated memory
 * @head: head node.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
