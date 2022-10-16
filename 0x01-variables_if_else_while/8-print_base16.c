#include <stdio.h>

/**
 * main - print hexadecimal
 *
 * Return: return 0
 */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
