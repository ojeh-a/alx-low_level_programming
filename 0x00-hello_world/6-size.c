#include <stdio.h>

/**
 * main - entry, print to output
 *
 * Return: 0(successfull)
 */
int main(void)
{
	printf("size of a char: %d byte(s)\n", (int)sizeof(char));
	printf("size of an int: %d byte(s)\n", (int)sizeof(int));
	printf("size of a long int: %d byte(s)\n", (int)sizeof(long int));
	printf("size of a long long int: %d byte(s)\n", (int)sizeof(long long int));
	printf("size of a float: %d byte(s)\n", (int)sizeof(float));
	return (0);
}
