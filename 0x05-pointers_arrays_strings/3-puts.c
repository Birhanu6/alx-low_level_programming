#include "main.h"
/**
 * _puts - prints a string
 * @str:  parameter
 *
 * Description: A function that prints a string
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
