#include "variadic_functions.h"

/**
  * sum_them_all - fills memory with a constant byte
  * @n: the amount of args
  * Return: the sum of all arg received
  * Tuwache kufork tu....by nixon
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list gett;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(gett, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(gett, int);
	}
	va_end(gett);
	return (sum);
}

