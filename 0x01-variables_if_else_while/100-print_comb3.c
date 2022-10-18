#include <stdio.h>

/**
*  main - print all possible cobinations of two digits
*
* Return: return 0
*/

int main(void)
{
	int a=48;
	int b=49;

	while (a = 48, a <= 56)
	{
		while (b = 49, b <= 57)
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
