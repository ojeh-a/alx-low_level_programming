#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: number of times "_" will be printed
 *
 * Return: 0 or less
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');

	else
	{
		for (i = 1; i <= n; i++)
			_putchar('_');

		_putchar('\n');
	}
}
