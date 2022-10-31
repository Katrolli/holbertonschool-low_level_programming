#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Defining a dog struct
 * @d: old pointer
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
