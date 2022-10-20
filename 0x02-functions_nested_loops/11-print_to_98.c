#include "main.h"

/**
  * print_to_98 - print all natural numbers to 98
  *
  * @n: natural number
  *
  * Return: 0
  */

void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
}
