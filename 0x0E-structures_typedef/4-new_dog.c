#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * new_dog - fills memory with a constant byte
  * @name: is the name of the dog
  * @age: is the age of the dog
  * @owner: is the owner of the dog
  * Return: a void pointer
  * Tuwache kufork tu....by nixon
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int cont1, cont2, cont3;
	char *sname, *sowner;
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	for (cont1 = 0; name[cont1] != '\0'; cont1++)
		;
	for (cont2 = 0; owner[cont2] != '\0'; cont2++)
		;
	sname = malloc(sizeof(char) * cont1 + 1);
	if (sname == NULL)
	{
		free(ndog);
		return (NULL);
	}

	for (cont3 = 0; cont3 <= cont1; cont3++)
		sname[cont3] = name[cont3];

	sowner = malloc(sizeof(char) * cont2 + 1);
	if (sowner == NULL)
	{
		free(ndog);
		free(sname);
		return (NULL);
	}
	for (cont3 = 0; cont3 <= cont2; cont3++)
		sowner[cont3] = owner[cont3];
	ndog->name = sname;
	ndog->age = age;
	ndog->owner = sowner;
	return (ndog);
}

