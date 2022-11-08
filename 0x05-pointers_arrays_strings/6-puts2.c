#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string, strating with the first.
 *
 * @str: string
 *
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
		{
			putchar(str[i]);
		}
		else
			continue;
	}
	putchar('\n');

}
