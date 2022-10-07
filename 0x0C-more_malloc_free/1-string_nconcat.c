#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * string_nconcat - concatenates two strings so far n
  * @s1: string 1 address
  * @s2: string 2 address
  * @n: is the delimiter
  * Return: an address of the concatenate string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, size1, size2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (size1 = 0; s1[size1] != '\0'; size1++)
		;

	for (size2 = 0; s2[size2] != '\0'; size2++)
		;

	if (n >= size2)
		;
	else
		size2 = n;

	s = malloc((sizeof(char) * size1) + (sizeof(char) * size2) + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < (size1 + size2); i++)
	{
		if (i >= size1)
			s[i] = s2[i - size1];
		else
			s[i] = s1[i];
	}
	s[i] = '\0';
	return (s);
}

