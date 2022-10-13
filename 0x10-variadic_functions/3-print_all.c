#include "variadic_functions.h"

void ch(va_list a);
void in(va_list a);
void fl(va_list a);
void cha(va_list a);

/**
  * print_all - fills memory with a constant byte
  * @format: is string
  * Return: nothing
  * Tuwache kufork tu....by nixon
  */

void print_all(const char * const format, ...)
{
	va_list gett;
	unsigned int i, j;
	char *separ = "";
	op_t o[] = {
		{"c", ch},
		{"i", in},
		{"f", fl},
		{"s", cha},
		{NULL, NULL}
	};

	va_start(gett, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (o[j].op != NULL)
		{
			if (format[i] == o[j].op[0])
			{
				printf("%s", separ);
				o[j].f(gett);
				separ = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(gett);
	printf("\n");
}

/**
  * ch - fills memory with a constant byte
  * @a: is string
  * Return: nothing
  */

void ch(va_list a)
{
	printf("%c", va_arg(a, int));
}

/**
  * in - fills memory with a constant byte
  * @a: is string
  * Return: nothing
  */

void in(va_list a)
{
	printf("%d", va_arg(a, int));
}

/**
  * fl - fills memory with a constant byte
  * @a: is string
  * Return: nothing
  */

void fl(va_list a)
{
	printf("%f", va_arg(a, double));
}

/**
  * cha - fills memory with a constant byte
  * @a: is string
  * Return: nothing
  */

void cha(va_list a)
{
	char *aa = va_arg(a, char *);

	if (aa == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", aa);
}

