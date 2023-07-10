#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  *main - main entry, adds numbers from command line arguments.
  *@argc: argument count.
  *@argv: argument vector
  *Return: 0 if it's digit, 1 otherwise.
  */
int main(int argc, char *argv[])
{
	int add = 0;
	int i, j;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
