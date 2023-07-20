#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
  * string_nconcat - concatenates two strings.
  * @s1: 1st string
  * @s2: 2nd string
  * @n: integer
  *
  * Return: a pointer or NULL
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len_s1;
	size_t len_s2;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	if (n >= len_s2)
	{
		n = len_s2;
	}
	result = malloc(len_s1 + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	strncpy(result, s1, len_s1);
	strncpy(result + len_s1, s2, n);
	result[len_s1 + n] = '\0';
	return (result);
}
