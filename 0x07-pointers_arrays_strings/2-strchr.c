#include "main.h"

/**
  *_strchr - return a pointer to the first occurence of 'c'
  *
  *@c: forst occurence of character
  *@s: string
  *
  *Return: pointer or NULL
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
