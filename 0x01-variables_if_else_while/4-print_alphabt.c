#include <stdio.h>

/**
 * main - print alphabets
 *
 * Return: return 0
 */
int main(void)
{
	char alpha = 'a';
	char alphaz = 'z';
	char que = 'q';
	char era = 'e';

	while ( alpha <= alphaz && alpha != (era || que); alpha++;)
	{
		putchar(alpha);
	}
	return (0);
}