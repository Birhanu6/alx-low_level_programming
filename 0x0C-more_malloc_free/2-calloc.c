#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _calloc - fills memory with a constant byte
  * @nmemb: numbers of rows
  * @size: numbers of colums
  * Return: an array address
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < nmemb * sizeof(char) * size; i++)
		s[i] = 0;
	return (s);
}

