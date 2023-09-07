#include "main.h"

/**
  *print_triangle - prints triangle
  *
  *@size: size of triangle
  *
  *Return: 0
  */

void print_triangle(int size)
{
	int i, j, k = size - 1, s = 1;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = size - s; j >= 1; j--)
		{
			putchar(' ');
		}
		for (k = 1; k <= i; k++)
		{
			putchar('#');
		}
		s++;
		putchar('\n');
	}
}
