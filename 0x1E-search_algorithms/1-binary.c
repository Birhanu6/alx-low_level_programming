#include "search_algos.h"


/**
 * search_result - display the range of binary search
 * @l: the first index for display
 * @r: the last index for display
 * @array: the array to display
*/

void search_result(int *array, int l, int r)
{
	printf("Searching in array: ");
	for (;l < r; l++)
		printf("%i, ", array[l]);
	printf("%i\n", array[r]);
}

/**
 * binary_search - search value in the given array using binary algo
 * @array: array contain numbers
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: index if found, -1 if sth went wrong
*/

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1;
	int m;

	if (!array || !size)
		return (-1);

	while (l <= r)
	{
		search_result(array, l, r);
		m = (r + l) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
