#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 *
 * Return: 0
 */

void more_numbers(void)
{
	int n;
	int m;

	for (m = 0; m <= 10; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar('0' + n / 10);
			}
			_putchar('0' + n % 10);
		}
		_putchar('\n');
	}
}
