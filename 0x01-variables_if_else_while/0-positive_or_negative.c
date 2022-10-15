nclude <stdlib.h>
#include <time.h>
/* more headers goes there */

/* 
 * main - prints the value of n
 *
 * Return: 0(end) 
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				if (n > 0)
				{ /* if condition is true, then print the following */
					printf("n is positive\n")
				}
				else if (n = 0)
				{ /* else print if this condition is true */
					printf("n is zero\n")
				}
				else 
				{ /* else print this statement */
					printf("n is negative")
				}
					return (0);
}i
