#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination
 *
 * @src: source
 *
 * @n: bytes
 *
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (n > 0 && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	dest[i] = '\0';
	return (&dest[0]);
}

