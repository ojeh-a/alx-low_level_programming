#include <stdio.h>

/**
 * main - print reverse alphabet
 *
 * Return: return 0
 */
int main(void)
{
	int rev_alpha;

	for (rev_alpha = 'z'; rev_alpha >= 'a'; rev_alpha--)
	{
		putchar(rev_alpha);
	}
	putchar('\n');
	return (0);
}
