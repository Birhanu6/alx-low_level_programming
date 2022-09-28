#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - fills memory with a constant byte
 * @s: is a pointer char type
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		;

	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
