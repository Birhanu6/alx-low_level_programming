#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char **spll(char *str, int cont1);
/**
  * strtow - splits a string into words
  * @str: a string with spaces
  * Return: an address
  */

char **strtow(char *str)
{
	int i, cont1 = 0, flag1 = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && flag1 == 0)
		{
			cont1++;
			flag1 = 1;
		}
		else if (flag1 == 1 && str[i + 1] == ' ')
			flag1 = 0;
	}
	if (cont1 == 0)
		return (NULL);

	return (spll(str, cont1));
}

/**
  * spll - splits a string into words
  * @str: a string with spaces
  * @cont1: is a counter
  * Return: an address
  */

char **spll(char *str, int cont1)
{
	int i, j, k, cont2, flag1 = 0;
	char **splitt;

	splitt = malloc((cont1 + 1) * sizeof(char *));
	if (!splitt)
		return (NULL);
	for (i = 0, j = 0, flag1 = 0, cont2 = 0; i < cont1; i++, j++)
	{
		for ( ; str[j] != '\0'; j++)
		{
			if (str[j] != ' ')
			{
				cont2++;
				flag1 = 1;
			}
			if (flag1 == 1 && (str[j + 1] == ' ' || str[j + 1] == '\0'))
			{
				flag1 = 0;
				splitt[i] = malloc(cont2 * sizeof(char) + 1);
				if (splitt[i] == NULL)
				{
					for (i--; i >= 0; i--)
						free(splitt[i]);
					free(splitt);
					return (NULL);
				}
				for (k = 0; k < cont2; k++)
					splitt[i][k] = str[(j - cont2 + 1) + k];
				splitt[i][k] = '\0';
				cont2 = 0;
				break;
			}
		}
	}
	splitt[i] = '\0';
	return (splitt);
}

