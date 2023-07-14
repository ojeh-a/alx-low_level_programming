#include <unistd.h>
/**
  *_putchar - prints character
  *@c: char
  *Return: int
  */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
