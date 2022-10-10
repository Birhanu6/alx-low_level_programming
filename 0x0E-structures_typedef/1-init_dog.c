#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * init_dog - fills memory with a constant byte
  * @d: is the pointer of the strut
  * @name: is the name of the dog
  * @age: is the age of the dog
  * @owner: is the owner of the dog
  * Return: a void pointer
  * Tuwache kufork tu....by nixon
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
