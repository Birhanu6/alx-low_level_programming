#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_dog - fills memory with a constant byte
  * @d: is the pointer of the strut
  * Return: a void pointer
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

