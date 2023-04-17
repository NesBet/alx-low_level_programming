#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog.
 *
 * @d: Struct dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: The dog's owner.
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
