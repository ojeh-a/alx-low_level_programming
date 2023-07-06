#include <stdio.h>
#include <stdlib.h>
/**
  *main - entry point
  *@argc: argument count
  *@argv: argument vector
  *Return: 0 on success and 1 on error
  */
int main(int argc, char *argv[])
{
	int mul;
	char a;
	char b;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul =  (a * b);
	if (argc <= 3)
	{
		printf("%d\n", mul);
	}
	else
		{
			printf("Error");
			return (1);
		}
	return (0);
}
