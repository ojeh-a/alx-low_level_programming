#include <stdio.h>

/**
 * main - entry, print to output
 *
 * Return: 0(successful)
 */
int main(void)
	char a;
	short b;
	int c;
	long d;
	long long e;
	float f;
{
	printf("size of char: %d byte(s)\n", sizeof(a));
	printf("size of short: %d byte(s)\n", sizeof(b));
	printf("size of int: %d byte(s)\n", sizeof(c));
	printf("size of long: %d byte(s)\n", sizeof(d));
	printf("size of long long: %d byte(s)\n", sizeof(e));
	printf("size of float: %d byte(S)\n", sizeof(f))
	return (0)
}
