#include "main.h"
#include <stdio.h>
int contador(char *s1, int cont1);
int fakefake(char *s, char *ss, int cont);

/**
 * is_palindrome - set true or false for palindrome string
 * @s: is an address of memory
 * Return: true or false for palindrome string
 * function returns 1 if string is palindrome 0 if not.
 * An empty string is a palindrome
 */

int is_palindrome(char *s)
{
	int cont;

	cont = contador(s, 0);
	return (fakefake(s, s + cont - 1, cont - 1));
}

/**
 * contador - count how many digits has the string
 * @s1: is an address of memory
 * @cont1: is the counter
 * Return: how many digits has the given string
 */

int contador(char *s1, int cont1)
{
	int nume = 0;

	if (*s1 != '\0')
	{
		nume = 1 + (contador(s1 + 1, cont1 + 1));
		return (nume);
	}

	else
		return (0);
}

/**
 * fakefake - set true or false for palindrome strin
 * @s: is the first address of memory of string
 * @ss: is the last address of memory of string
 * @cont: is the counter of string
 * Return: true or false if the string is palindrome
 */

int fakefake(char *s, char *ss, int cont)
{
	if (*s == *ss && cont >= 0)
		return (fakefake(s + 1, ss - 1, cont - 1));

	else if (cont < 0)
		return (1);

	else
		return (0);
}
