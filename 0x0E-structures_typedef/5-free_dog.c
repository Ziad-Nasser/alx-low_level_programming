#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - remove
 * @d: dog reference
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
