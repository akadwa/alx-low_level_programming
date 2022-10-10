#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the dogs
 *
 * @d: Dog's details
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
