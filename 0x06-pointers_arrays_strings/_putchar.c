#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 *
 * @c: the character to print
 *
 * Return: 1 or -1
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
