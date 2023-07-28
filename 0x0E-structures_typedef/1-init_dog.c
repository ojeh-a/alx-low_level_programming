#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct.
 * @d: struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
