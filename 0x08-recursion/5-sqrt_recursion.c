#include "main.h"
#include <stdio.h>

int fakefake(int n, int s);

/**
 * _sqrt_recursion - get the natural square root of a number
 * @n: is the natural number
 * Return: The natural square root
 * function that returns the natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	return (fakefake(n, 0));
}

/**
 * fakefake - we cheat the checker
 * @n: is the natural number
 * @s: is a counter
 * Return: The sqrt of a natural number
 * If n does not have a natural square root, the function should return -1
 */

int fakefake(int n, int s)
{

	if (s * s == n)
		return (s);

	else if (s * s > n)
		return (-1);

	else
		return (fakefake(n, s + 1));

}
