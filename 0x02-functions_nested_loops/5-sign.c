#include "main.h"

/**
  * print_sign - checks for alphabetic character
  *
  *  @n: character to be checked
  *
  * Return: always 0, 1 or -1
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
