#include <stdio.h>

/**
  main - print all possible cobinations of two digits

Return: return 0
*/

int main(void)
{
	int a;
	int b;
	a = 0;
	b = 1;

	while (a <= 8)
	{
		while (b <= 9)
		{
			putchar(48 + a);
			putchar(48 + b);
			if (b < 9 - 0)
			{
				putchar(',');
				putchar(' ');
			}
			a++;
		}
		b++;
	}
	putchar('\n');
	return (0);
}
