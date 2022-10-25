#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int l = 0;


	while (*str != '\0')
	{
		l++;
		str++;
	}
	str -= (l / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
