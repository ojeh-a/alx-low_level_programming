#include <stdlib.h>
/**
 * int_index - a function that ssearches for an integer
 * @array: an array of integers
 * @size: sze of integer
 * @cmp: pointer to a function
 *
 * Return: nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
		{
			return (i);
		}
	}
	return (-1);
}

