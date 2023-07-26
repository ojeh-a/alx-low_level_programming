#include "main.h"

/**
 * print_times_table - prints n times table, starting with 0.
 * @n: integer
 *
 * Return: Nothing.
 */
void print_times_table(int n)
{
	int i;
	int j;
	int mul;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		_putchar(48);
		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');
			mul = (i * j);
			if (mul <= 9)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (mul > 9 && mul < 100)
			{
				_putchar(' ');
				_putchar((mul / 10) + 48);
			}
			else
			{
				_putchar(((mul / 10) / 10) + 48);
				_putchar(((mul / 10) % 10) + 48);
			}

			_putchar((mul % 10) + 48);
		}
		_putchar('\n');
	}
}
