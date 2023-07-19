#include <stdlib.h>
#include <stdio.h>
/**
  * malloc_checked - allocates a memory using malloc
  * @b: unsigned int
  *
  * Return: a pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
