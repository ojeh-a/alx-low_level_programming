#include "lists.h"

/**
 * add_nodeint_end - adds a new noode at the end of a list.
 * @head: pointer to a listint_t pointer.
 * @n: constant integer.
 *
 * Return: the address of the new element or NULL iif it  failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	tmp = *head;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
	tmp->next = new_node;
	}
	return (*head);
}


