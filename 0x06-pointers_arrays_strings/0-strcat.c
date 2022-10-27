#include <stdio.h>
#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * Return: a pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;

	}
	dest[i] = '\0';
	
	return (&dest[0]);
}
