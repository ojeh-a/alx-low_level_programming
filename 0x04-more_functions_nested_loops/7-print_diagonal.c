#include "main.h"

/**
 * print_diagonal - draws a diagonal on the terminal
 *
 * @n: number of lines
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int column, row;

	if (n <= 0)
		_putchar('\n');

	column = 0;
	while (column < n)
	{
		row = 0;
		while (row <= column)
		{
			if (row == column)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
			row++;
		}
		column++;
		_putchar('\n');
	}
}
