#include "main.h"
/**
  *_puts - prints string to standard output
  *@s: pointer to a char
  *Return: void
  */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
