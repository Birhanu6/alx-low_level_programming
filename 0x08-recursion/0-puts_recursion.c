#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - fills memory with a constant byte
 * @s: is a pointer char type
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');

	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

}
