#include "main.h"

/**
  * get_bit - fills memory with a constant byte
  * @n: is the size of the pointer
  * @index: a index
  * Return: a int
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return (((n) & ((1) << (index))) ? 1 : 0);
}
