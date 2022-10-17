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
	a = '0';
	b = '1';

	while (a <= '8')
	{
		while (b <= '9')
		{
			while (a != b)
			{
				putchar(48 + a);
				putchar(48 + b);
				if (a <= '8')
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
