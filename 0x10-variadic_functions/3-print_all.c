#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			printf("%s%c", separator, va_arg(args, int));
		} else if (format[i] == 'i')
		{
			printf("%s%d", separator, va_arg(args, int));
		} else if (format[i] == 'f')
		{
			printf("%s%f", separator, va_arg(args, double));
		} else if (format[i] == 's')
		{
			char *str = va_arg(args, char *);

			if (str == NULL)
			{
				str = "(nil)";
			}
			printf("%s%s", separator, str);
		}
		separator = ", ";
		i++;
	}

	va_end(args);

	printf("\n");
}

