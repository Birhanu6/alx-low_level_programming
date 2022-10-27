#include "main.h"

/**
  * get_endianness - fills memory with a constant byte
  * Return: 0 if endian
  */

int get_endianness(void)
{
	int num = 258;
	char *kno = (char *) &num;

	if (*(kno + 2) > *(kno + 3))
		return (0);
	return (1);
}
