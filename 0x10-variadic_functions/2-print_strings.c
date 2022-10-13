#include "variadic_functions.h"

/**
  * print_strings - fills memory with a constant byte
  * @separator: is string
  * @n: the amount of args
  * Return: nothing
  * Tuwache kufork tu....by nixon
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list gett;
	unsigned int i;
	char *str;

	va_start(gett, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(gett, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(gett);
	printf("\n");
}

