#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - executes a function given on each element of an array
 * @array: array of integer
 * @size: size of the array.
 * @action: function pointer
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL  && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
		action(array[i]);
		}
	}
}
