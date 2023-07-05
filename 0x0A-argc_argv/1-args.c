#include <stdio.h>
/**
  *main - entry point.
  *
  *@argc: argument count.
  *@argv: argument vector.
  *Return: nothing.
  */

int main(int argc, char *argv[])
{
	int count = (argc - 1);

	argv--;
	if (argc > 1)

	{
		printf("%d\n", count);
	}
	else
		printf("0\n");
	return (0);
}

