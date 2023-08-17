#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints opcodes
 *
 * Return: nothing.
 */
void print_opcodes(void)
{
}

/**
 * main - entry point, main function.
 * @argc: argument count.
 * @argv: argument vector
 *
 * Return: int.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	unsigned char *ptr = (unsigned char *)&print_opcodes;
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", ptr[i]);
		if (i < num_bytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
