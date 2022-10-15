#include <stdio.h>

/**
 * main - print alphabet
 *
 * Return: 0(end)
 */
int main(void)
{
	char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
