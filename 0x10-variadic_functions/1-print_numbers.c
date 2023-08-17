#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers
 * @n: number of integers
 *
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);
	for (unsigned int i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}

