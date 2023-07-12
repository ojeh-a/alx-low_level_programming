#include "main.h"

/**
 * _strcmp - compares two string
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: 1, 0 or -1
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	j = s1[i] - s2[i];
	return (j);
}
