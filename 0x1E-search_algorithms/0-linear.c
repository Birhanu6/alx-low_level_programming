#include "search_algos.h"

/**
 * linear_search - search value in the given array
 * @array: array contain numbers
 * @size: the size of the array
 * @value: the value to search
 * Return: index if found, -1 if sth went wrong
*/

int linear_search(int *array, size_t size, int value)
{
	size_t index = size - 1;
	int *ptr = array;

	if (!array || !size)
		return (-1);

	while (size--)
	{
		printf("Value checked array[%li] = [%i]\n", (index - size), *ptr);
		if (*ptr == value)
			return (index - size);
		ptr++;
	}
	return (-1);

}
