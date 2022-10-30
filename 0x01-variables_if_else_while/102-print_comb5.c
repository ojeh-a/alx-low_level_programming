#include <stdio.h>

/**
  *main - prints all posible cmbinations of two numbers
  *
  *Return: 0
  */
int main(void)
{
	int a, b, c, d;

		for (a = '0'; a <= '9'; a++)
		{
			for (b = '0'; b <= '9'; b++)
			{
				for (c = '0'; c <= '9'; c++)
				{
					for (d = '0'; d <= '9'; d++)
					{
						if (a + b < c + d)
						{
							putchar(a);
							putchar(b);
							putchar(' ');
							putchar(c);
							putchar(d);
							if (a == 57 && b == 56 && c == 57 && d == 57)
							{
								break;
							}
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
