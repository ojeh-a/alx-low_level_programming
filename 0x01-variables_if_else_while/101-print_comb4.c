#include <stdio.h>

/**
  * main - prints all possible combination of 3 digits
  *
  *Return: 0
  */

int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '7'; a++)
	{
		for (b = '1'; b <= '8'; b++)
		{
			for (c = '2'; c <= '9'; c++)
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a < '7')

					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
