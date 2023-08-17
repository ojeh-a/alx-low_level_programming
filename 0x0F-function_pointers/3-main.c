#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main program to run my basic arithmetcs.
 * @argc: argument count
 * @argv: argument vecor
 *
 * Return: int.
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	char *operator = argv[2];
	int (*operation)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	operation = get_op_func(operator);
	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}
	result = operation(a, b);
	printf("%d\n", result);
	return (0);
}
