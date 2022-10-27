#include "main.h"

/**
  * flip_bits - fills memory with a constant byte
  * @n: is the size of the pointer
  * @m: a index
  * Return: a int
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int r = 0;

	if (!(n == m))
	{
		while (!(n == m))
		{
			if (n == 0 && m == 0)
				break;

			if (!((n & 1) == (m & 1)))
				r += 1;
			n = n >> 1;
			m = m >> 1;
		}
	}
	return (r);
}
