#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - Return a pointer to a 2 dimensional array of integers.
  * @width: is the width of a bidementional array
  * @height: is the height of a bidimentional array
  * Return: an address
  * itabidi msome
  */

int **alloc_grid(int width, int height)
{
	int **nixon;
	int i, j;

	if (width <= 0 || height <= 0 || (height == 1 && width == 1))
		return (NULL);

	nixon = malloc(height * sizeof(int *));
	if (!nixon)
		return (NULL);

	for (i = 0; i < height ; i++)
	{
		nixon[i] = malloc(width * sizeof(int));

		if (!nixon[i])
		{
			for (i--; i >= 0; i--)
				free(nixon[i]);

			free(nixon);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			nixon[i][j] = 0;
	}

	return (nixon);
}

