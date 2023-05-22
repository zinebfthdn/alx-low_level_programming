#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - freeing the memory allocated for a struct dog
 * @d: struct dog to direction free
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
