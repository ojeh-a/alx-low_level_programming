#include <stdio.h>

/**
 * main - print alphabets
 *
 * Return: return 0
 */
int main(void)
{
	int alpha;
	
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}
