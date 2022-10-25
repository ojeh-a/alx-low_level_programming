#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements of an array ofintegers
 *
 * @n: number of elements to be printed
 *
 * @a: array
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int e;

	for (e = 0; e < n; e++)
	{
		printf("%d", a[e]);
		if (e != n - 1)
			printf(", ");
	}
	printf("\n");
}
