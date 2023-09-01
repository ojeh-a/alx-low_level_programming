#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index.
 * @n: an unsigned int.
 * @index: index, starting from 0 of the bit to get.
 *
 * Return: Value of the bit at index or -1 if an error occur.
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if (index > sizeof(size_t) * 8)
		return (-1);

	if (1 & n >> index)
		return (1);
	else
		return (0);
}
