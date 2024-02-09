#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using the
 * Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in `array`.
 * @value: The value to search for.
 *
 * Return: the index where value is located or
 * -1 if array is NULL or value is not present.
 */
int binary_search(int *array, size_t size, int value)
{
	int index;
	int left, right = size - 1;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (index = left; index < right; index++)
			printf("%d, ", array[index]);
		printf("%d\n", array[index]);

		index = left + (right - left) / 2;
		if (array[index] == value)
			return (index);
		if (array[index] > value)
			right = index - 1;
		else
			left = index + 1;
	}
	return (-1);
}
