#include "lists.h"

/**
 * listint_len - counts the number of element in a list.
 * @h: pointer to a constant struct.
 *
 * Return: the number of elements(unsigned int).
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h  == NULL)
		return (0);
	while (h->next != NULL)
	{
		count++;
		h = h->next;
	}
	return (count + 1);
}
