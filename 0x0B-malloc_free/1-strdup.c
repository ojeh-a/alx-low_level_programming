#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
  * _strdup - returns a pointer to a newly allocated space in memory,
  * which contains a copy of the string as a parameter.
  * @str: string
  *
  * Return: NULL or a pointer
  */
char *_strdup(char *str)
{
	size_t length;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	length = strlen(str) + 1;
	duplicate = malloc(length);
	if (duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);
	return (duplicate);
}
