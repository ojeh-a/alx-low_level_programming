#include <stdio.h>

/**
 * main - print single number
 *
 * Return: 0
 */
int main(void)
{
	int n = 0;

	for (n < 10)
	{
		putchar(48 + n);
		n++;
	}
	putchar("\n");
	return (0);
}
