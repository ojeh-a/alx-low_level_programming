#include "main.h"

/**
  * main - entry point
  *
  * Return: Always 0
  */

int main(void)
{
	/**
	  *print_alphabet - prints alphabets in lowercase
	  *
	  * Return: 0
	  */
	print_alphabet(void)
	{
		char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
	return (0);
}
