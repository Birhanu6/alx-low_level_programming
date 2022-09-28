#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - get the value of x raised to power of y
 * @x: is the base
 * @y: is the power
 * Return: The x pow y
 * If y is lower than 0, the function should return -1
 */

int _pow_recursion(int x, int y)
{
	int powe = 0;

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	else
	{
		powe = x * _pow_recursion(x, y - 1);
		return (powe);
	}

}
