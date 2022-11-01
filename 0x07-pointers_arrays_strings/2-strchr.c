#include "main.h"

/**
  *_strchr(char *s' char c)
  *
  *@c: forst occurence of character
  *@s: string
  *
  *Return: pointer or NULL
  */

char *_strchr(char *s, char c)
{
	int i;
	char *ptr;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			ptr = s + i;
			break;
		}
	}
	return (ptr);
}
