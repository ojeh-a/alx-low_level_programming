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
				 /* if condition is true, then print the following */
					printf("%d is positive\n", n);

				else if (n == 0)
				 /* else print if this condition is true */

					printf("%d is zero\n", n);
			
				else 
				 /* else print this statement */

					printf("%d is negative\n, n");
				
					return (0);
}i
