#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - this function prints name.
 * @name: the name the function will print.
 * @f: a pointer to a function that takes in a string and return nothing.
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
	{
		f(name);
	}
}
