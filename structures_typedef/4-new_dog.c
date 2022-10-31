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
	int i, len, len2;

	for (i = 0; name[i] != '\0'; i++)
	{
	}
	len = i;
	for (i = 0; owner[i] != '\0'; i++)
	{
	}
	len2= i;
	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);
	new_d->name = malloc(sizeof(char) * len + 1);
	if (new_d->name == NULL)
	{
		free(new_d);
		return (NULL);
	}
	new_d->owner = malloc(sizeof(char) * len2 + 1);
		if (new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}
		for ( i = 0; name[i] != '\0'; i++)
		{
			new_d->name[i] = name[i];
		}
		new_d->name[i] = '\0';
		for (i = 0; owner[i] != '\0'; i++)
		{
			new_d->owner[i] = owner[i];
		}
		new_d->owner[i] = '\0';
		new_d->age = age;
		return (new_d);
}
