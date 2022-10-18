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

	while (a <= 56)
	{
		while (b <= 57)
		{
			while (a != b)
			{
				putchar(a);
				putchar(b);
				if (a <= 56)
				{
				putchar(',');
				putchar(' ');
				}
				b++;
			}
			b = a + 1;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
