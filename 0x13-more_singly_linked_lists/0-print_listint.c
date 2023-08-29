#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list.
 * @h: pointer to the next element
 *
 * Return: number of nodes(unsigned int)
 */
size_t print_listint(const  listint_t *h)
{
	int count = 0;

	if (h == 0)
	{
		return (0);
	}
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	printf("%d\n", h->n);
	return (count + 1);
}
