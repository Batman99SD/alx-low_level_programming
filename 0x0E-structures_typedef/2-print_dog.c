#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a dog info
 * @d: the dog to init
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Name: %s\n", d->age);
		printf("Name: %s\n", d->owner ? d->owner : "(nil)");
	}
}
