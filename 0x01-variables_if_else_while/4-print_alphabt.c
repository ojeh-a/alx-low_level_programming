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
	
	for (alpha <= alphaz;)
	{
		putchar(alpha);
		alpha++;
		while (alpha != era || que);
	}
	return (0);
}
