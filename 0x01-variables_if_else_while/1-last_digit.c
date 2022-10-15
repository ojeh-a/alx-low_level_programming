#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/*
 * main - print last digit of n
 *
 * Return: 0(end)
 */
int main(void)
{
		int n, lst_n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				lst_n = n % 10;
				if (lst_n > 5)
				{
					printf("Last digit of %d is %d and is greater than 5\n", n, lst_n);
				}
				else if (lst_n == 0)
				{
					printf("Last digit of %d is %d and is 0\n", n, lst_n);
				}
				else if (lst_n < 6 && lst_n != 0)
				{
					printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst_n);
				}
				return (0);
}
