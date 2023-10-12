#include "lists.h"

/**
 * print_dlistint - prints all the element of a list.
 * @h: pointer to the first element on the list (head).
 *
 * Return: Number of elements in the list (unsigned integer).
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		node_count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node_count);
}

