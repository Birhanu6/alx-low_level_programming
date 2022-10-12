#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * array_iterator - fills memory with a constant byte
  * @array: is the array
  * @size: is the size of the array
  * @action: is function pointer
  * Return: a void pointer
  * Tuwache kufork tu....by nixon
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL && size != 0)
		for (i = 0; i < size; i++)
			action(array[i]);
}
