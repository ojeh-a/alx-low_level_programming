#include "main.h"

/**
  * _isalpha - checks for alphabetic character
  *
  * @c: the caracter to be checked
  *
  * Return: 0 or 1
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	} else
	{
		return (0);
	}
}