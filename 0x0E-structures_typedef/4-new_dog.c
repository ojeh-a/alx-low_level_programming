#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: BULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		return (NULL);
	}

	newdog->name = malloc(strlen(name) + 1);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	strcpy(newdog->name, name);
	newdog->age = age;

	newdog->owner = malloc(strlen(owner) + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	strcpy(newdog->owner, owner);
	return (newdog);
}
