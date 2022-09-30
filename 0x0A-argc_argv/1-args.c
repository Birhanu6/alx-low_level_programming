#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the length of the arguments
 * @argc: has the length of the arguments
 * @argv: has the arguments
 * Return: 0 to indicate a good working of the program
 */

int main(int argc, char **argv)
{
	if (**argv != '\0')
	printf("%d\n", argc - 1);

	return (0);
}
