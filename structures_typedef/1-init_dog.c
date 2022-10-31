#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Defining a dog struct
 * @d: First member
 * @name: name variable
 * @age: Second member
 * @owner: Third member
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
