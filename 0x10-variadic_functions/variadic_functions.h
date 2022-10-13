#ifndef VARIADIC_F
#define VARIADIC_F

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
  * struct op - Struct op
  *
  * @op: The operator
  * @f: The function associated
  * Tuwache kufork tu....by nixon
  */

typedef struct op
{
	char *op;
	void (*f)(va_list);
} op_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif

