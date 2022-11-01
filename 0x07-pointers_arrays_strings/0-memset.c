#include "main.h"

/**
  *_memset - fills memory with a constant byte
  *
  *@n: first bytes of the memory pointed to by s
  *
  *@b: constant byte
  *
  *@s: pointer
  *
  *Return: pointer
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
