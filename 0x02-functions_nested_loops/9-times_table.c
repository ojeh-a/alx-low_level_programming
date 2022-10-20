#include "main.h"

/**
  * times_table - prints the multiplication table
  *
  *Return: Always 0
  */

void times_table(void)
{
	int n;
	int m;
	int reslt;

	for (n = 0; n <= 9; n++)
	{
		_putchar(48);
		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			reslt = n * m;
			if (reslt <= 9)
			{
				_putchar(' ');
			}
			else
				_putchar((reslt / 10) + 48);
			_putchar((reslt % 10) + 48);
		}
		_putchar ('\n');
	}
}
