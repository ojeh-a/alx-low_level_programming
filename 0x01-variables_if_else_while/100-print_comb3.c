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

	for (a = '0'; a < '9'; a++)
	{
		for (b = '1'; b <= '9'; b++)
			if (a < b)
			{
				putchar(a);
				putchar(b);
				if (a < '8')
				{
				putchar(',');
				}
				putchar(' ');
			}
	}
return (0);
}
