#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - fills memory with a constant byte
  * @size: is the size of the pointer
  * @c: is a letter
  * Return: an address
  */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || !s)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			s[i] = c;
	}
	return (s);
}

