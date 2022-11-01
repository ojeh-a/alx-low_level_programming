#include "main.h"

/**
  *_memcpy - copies memory area
  *
  *@n: bytes to be copied
  *@src: pointer to source
  *@dest: pointer to destination
  *
  *Return: pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

