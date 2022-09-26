#include "main.h"
#include <stdio.h>
/**
 * _strstr - loacte a substring.
 * @haystack: first string.
 * @needle: second string.
 * Return: char.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int n = 0, i = 0, j, tmpi, checker;

	while (needle[n] != '\0')
		n++;
	while (haystack[i] != '\0')
	{
		tmpi = i;
		checker = 0;
		for (j = 0; j < n; j++)
		{
			if (haystack[tmpi] == needle[j])
			{
				tmpi++;
				checker++;
			}
		}
		if (checker == n)
			return (haystack + i);
		i++;
	}
	return (0);
}
