#include <stdlib.h>
#include <string.h>
/**
  * str_concat - concatenates two strings
  * @s1: string 1
  * @s2: string 2
  *
  * Return: NULL or pointer.
  */
char *str_concat(char *s1, char *s2)
{
	size_t s1_len;
	size_t s2_len;
	char *result;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	result = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}

