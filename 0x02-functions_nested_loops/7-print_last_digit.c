#include "main.h"

/**
  * print_last_digit - prints last digit of a number
  *
  * @num: the number
  *
  * Return: value of num
  */

int print_last_digit(int num)
{
	int ld;

	ld = num % 10;
	if (num % 10 < 0)
	{
		_putchar((ld * -1) + 48);
		return (ld * -1);
	}
	_putchar(ld + 48);
	return (ld);
}
