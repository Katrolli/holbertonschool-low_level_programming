#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Defining a dog struct
 * @d: First member
 * @name: name variable
 * @age: Second member
 * @owner: Third member
 */
void print_dog(struct dog *d)
{
	if(d)
	{
		if ((*d).name == NULL && (*d).owner == NULL)
		{
			d->name = "(nil)";
			d->owner = "(nil)";
		}
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Ownser: %s\n", d->owner);
	}

}
