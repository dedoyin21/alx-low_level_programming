#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free all the memory allocated for a struct dog
 * @d: free struct dog 
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
