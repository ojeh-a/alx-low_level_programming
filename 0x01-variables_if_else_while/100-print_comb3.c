#include <stdio.h>

/**
*  main - print all possible cobinations of two digits
*
* Return: return 0
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
			putchar('0' + a);
			putchar('0' + b);
			if (a != b; a <= '8')
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
