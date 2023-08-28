#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - returns the number of elements in a linked list.
 * @h: a singly linked list.
 *
 * Return: number of elements in list_t (unsigned it).
 */
size_t list_len(const list_t *h)
{
	size_t count;

	if (h == 0)
	{
		return (0);
	}
	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
