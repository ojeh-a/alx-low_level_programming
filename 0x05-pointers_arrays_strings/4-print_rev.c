#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 *
 * @s: string to be printe
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int a = 0;


	while (s[a] != '\0')
		a++;
	{
		for (a = a - 1; a >= 0; a--)
		putchar(s[a]);
	}
	putchar('\n');
}
