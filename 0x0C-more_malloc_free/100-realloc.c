#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _realloc - Create an array of integers.
  * @ptr: is the pointer of the old string
  * @old_size: old number of letter in the string
  * @new_size: new number of letter in the string
  * Return: a pointer void
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *neww, *replace;

	if (ptr == NULL)
	{
		neww = malloc(new_size);
		if (neww == NULL)
			return (NULL);
		return (neww);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	replace = ptr;

	neww = malloc(new_size);

	if (neww == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		neww[i] = replace[i];

	free(ptr);
	return (neww);
}

