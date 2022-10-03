#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * argstostr - fills memory with a constant byte
  * @ac: is the size of the pointer
  * @av: is a letter
  * Return: an address
  * function that concatenates all the arguments of your program
  */

char *argstostr(int ac, char **av)
{
	char *okoth;
	int i, j, cont = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			cont++;
	}

	okoth = malloc(cont * sizeof(char) + ac + 1);
	if (!okoth)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			okoth[k] = av[i][j];
		okoth[k] = '\n';
		k++;
	}
	okoth[k] = '\0';
	return (okoth);
}

