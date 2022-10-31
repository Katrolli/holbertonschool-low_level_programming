#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Defining a dog struct
 * @name: First member
 * @age: second member
 * owner: third member
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;
	new_d = malloc(sizeof(dog_t));
	new_d->name = malloc(sizeof(char));
	new_d->owner = malloc(sizeof(char));

	if (new_d == NULL)
	{
		free(new_d);
		return (NULL);
	}
	new_d->name = name;
	new_d->age = age;
	new_d->owner = owner;
	return (new_d);
}
