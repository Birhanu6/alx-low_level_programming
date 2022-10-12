#include "function_pointers.h"

/**
  * print_name - fills memory with a constant byte
  * @name: is the name of the dog
  * @f: is a funtion pointer
  * Return: a void pointer
  * Tuwache kufork tu....by nixon
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		;
	else
		f(name);
}

