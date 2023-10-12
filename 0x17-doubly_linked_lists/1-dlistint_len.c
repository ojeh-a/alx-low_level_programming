#include "lists.h"

/**
 * dlistint_len - retrieve the number of elements in a linked list.
 * @h: head of the linked listL(pinter to a list)
 *
 * Return: number of elements in the list (unsigned int)
 */
size_t dlistint_len(const dlistint_t *h)
{
	int length = 0;

	while (h)
	{
		length++;
		h =  h->next;
	}
	return (length);
}
