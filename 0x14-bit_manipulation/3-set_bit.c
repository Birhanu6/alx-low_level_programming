#include "main.h"

/**
  * set_bit - fills memory with a constant byte
  * @n: is the size of the pointer
  * @index: a index
  * Return: a int
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	if (!(*n & (1 << index)))
		*n += 1 << index;
	return (1);
}
