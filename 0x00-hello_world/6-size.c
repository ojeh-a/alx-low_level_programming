#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the size of each type
 *
 * Return: 0(successful)
 */

int main(void)
{
		printf("Size of a char: %d byte(s)\n", (int)sizeof(char));
			printf("Size of an int: %d byte(s)\n", (int)sizeof(int));
				printf("Size of a long int: %d byte(s)\n", (int)sizeof(long int));
					printf("Size of a long long int: %d byte(s)\n", (int)sizeof(long long int));
						printf("Size of a float: %d byte(s)\n", (int)sizeof(float));
							return (0);
}
