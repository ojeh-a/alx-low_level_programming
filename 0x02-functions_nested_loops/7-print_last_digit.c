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
	int lst = num % 10;
	if (lst < 0)
	{
		lst *= -1;
	_putchar(lst + 48);
	}
	return (lst);
}
