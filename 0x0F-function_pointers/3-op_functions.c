#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds two integer a and b.
 * @a: first integer
 * @b: second integer
 *
 * Return: value of their sum.
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - subtracts integer b from a
 * @a: first integer
 * @b: second integer
 *
 * Return: value of (a-b).
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the value of (a*b)
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - divides an integer by a second integer
 * @a: dividend
 * @b: divisor
 *
 * Return: the value of (a/b)
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - returns a remainder of (a/b).
 * @a: dividend
 * @b: divisor
 *
 * Return: remainder of (a/b)
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
