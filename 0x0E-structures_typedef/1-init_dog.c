#include "dog.h"

/**
 * init_dog - initializes a dog
 * @dog: the dog to init
 * @name: the dog's name
 * @age: the dog's age
 * @oenr: owner's name
 *
 * Return: void.
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
