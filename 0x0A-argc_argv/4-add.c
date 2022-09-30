#include <stdio.h>
#include <stdlib.h>

/**
  * main - print the multiplication of two arguments
  * @argc: has the length of the arguments
  * @argv: has the arguments
  * Return: 0 to indicate a good working of the program
  */
int main(int argc, char **argv)
{
	int i, j, num = 0;

	if (argc < 3)
		printf("0\n");

	else
	{
	for (i = 1; i < argc; i++)
	{
		for (j = 0; (argv[i])[j] != '\0'; j++)
		{
			if (((argv[i])[j] - '0') >= 0 && ((argv[i])[j] - '0') <= 9)
				continue;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		num += atoi(argv[i]);
	}
	printf("%d\n", num);
	}
	return (0);
}
