#include <string.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - adds new node at he beginning of a list.
 * @head: pointer to head
 * @str: string
 * Return: the addres of the new eleement,  or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
