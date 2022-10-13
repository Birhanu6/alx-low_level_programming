#include "variadic_functions.h"

/**
  * print_numbers - fills memory with a constant byte
  * @separator: is string
  * @n: the amount of args
  * Return: nothing
  * Tuwache kufork tu....by nixon
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list gett;
	unsigned int i;

	va_start(gett, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(gett, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(gett);
	printf("\n");
}

