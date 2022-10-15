#include <stdio.h>

/**
 * main - print alphabet 
 *
 * Return: 0(end)
 */
int main(void)
{
	char letter_a = 'a';
	char letter_z = 'z';
	char ALPHA_A = 'A';
	char ALPHA_Z = 'Z';

	while (letter_a <= letter_z) letter_a++;
	{
		putchar(letter_a);
	}

	while (ALPHA_A <= ALPHA_Z) ALPHA_A++;
	{
		putchar(ALPHA_A);
	}
	putchar('\n');
	return (0);
}
