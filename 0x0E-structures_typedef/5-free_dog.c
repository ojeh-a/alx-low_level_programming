#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs.
 * @d: pointer to the dog to be freed
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
