#include <stdio.h>
/**
  *main - entry point
  *@argc: argument count
  *@argv: argument vector
  *Return: nothing
  */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
