#include "main.h"

/**
 * puts2
 *
 * @str: string
 *
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] 1= '\0'; i++)
	{
		if((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		else
			continue;
	}
	_putchar('\n');

}