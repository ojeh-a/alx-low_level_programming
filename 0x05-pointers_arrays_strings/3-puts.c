#include "main.h"

/**
 * _puts - prints a string to stdout
 *
 * @str: string
 *
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	_putchar('\n');
}
