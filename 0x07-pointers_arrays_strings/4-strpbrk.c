#include "main.h"
#include <stdio.h>

/**
 *  _strpbrk - searches a string for any of a set of bytes
  * @s: string
  * @accept: characters to be checked
  *
  * Return: pointer to bytes in s or NULL
  */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
