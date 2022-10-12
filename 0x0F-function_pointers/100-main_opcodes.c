#include <stdio.h>
#include <stdlib.h>

/**
  * main - print the name of this function
  * @argc: has the length of the arguments
  * @argv: has the arguments
  * Return: 0 to indicate a good working of the program
  */

int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < atoi(argv[1]) - 1; i++)
		printf("%02hhx ", ((char *) main)[i]);
	printf("%02hhx\n", ((char *) main)[i]);
	return (0);

}

