#include <stdio.h>
#include <stdlib.h>

/**
  * main - print the name of each argument
  * @argc: has the length of the arguments
  * @argv: has the arguments
  * Return: 0 to indicate a good working of the program
  */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *argv);
		argv++;
	}

	return (0);
}
