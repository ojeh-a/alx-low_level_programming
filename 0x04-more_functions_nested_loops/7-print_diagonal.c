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

	column = 0;
	while (column <= n)
	{
		row = 0;
		while (row <= n)
		{
			row++;
			if (row == column)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		column++;
		_putchar('\n');
	}
}
