#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * malloc_checked - fills memory with a constant byte
  * @b: is the size of the pointer
  * Return: a void pointer
  */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
		return (s);
	}
	return (s);
}

