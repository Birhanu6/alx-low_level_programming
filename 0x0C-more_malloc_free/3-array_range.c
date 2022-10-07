#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * array_range - Create an array of integers.
  * @min: numbers of rows
  * @max: numbers of columns
  * Return: an array address
  */

int *array_range(int min, int max)
{
	int *s;
	int i;

	if (min > max)
		return (NULL);

	s = malloc((max - min + 1) * sizeof(int));

	if (s == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
		s[i] = min + i;

	return (s);
}

