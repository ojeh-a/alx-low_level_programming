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
	int row, space, naira;


	if (row <= 0)
	{
		_putchar('\n');
	}

	for (row = 1; row <= size; row++)
	{
		for (space = size - row; space >= 1; space--)
		{
			_putchar(' ');
		}
		for (naira = 1; naira <= row; naira++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
