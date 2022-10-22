#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints c to stdout
 *
 *@c: the character to be checked
 *
 * Return: 1 or -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
