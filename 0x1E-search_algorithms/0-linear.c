#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using
 * the linear search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of element in the array
 * @value: Value to search for.
 *
 * Return: -1 if value is not present in array or array is NULL or value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
