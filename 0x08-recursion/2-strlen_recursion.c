#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - fills memory with a constant byte
 * @s: is a pointer char type
 * Return: Nothing
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (0);

	else
	{
		len = 1 + _strlen_recursion(s + 1);
		return (len);
	}

}
