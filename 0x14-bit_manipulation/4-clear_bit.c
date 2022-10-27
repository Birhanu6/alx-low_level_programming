#include "main.h"

/**
  * clear_bit - fills memory with a constant byte
  * @n: is the size of the pointer
  * @index: a index
  * Return: a int
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & (~(1 << index));
	return (1);
}
