#include <stdio.h>
#include <stdlib.h>

/**
  * main - print the minimum number of coins to make
  * change for an amount of money
  * @argc: has the length of the arguments
  * @argv: has the arguments
  * Return: 0 to indicate a good working of the program or 1 if it fault.
  */

int main(int argc, char **argv)
{
	int cents = 0, num;

	if (argc == 2)
	{
		num = atoi(argv[1]);
		if (num < 0)
			printf("0\n");
		else
		{
		while (num != 0)
		{
			if (num - 25 >= 0)
				num -= 25;
			else if (num - 10 >= 0)
				num -= 10;
			else if (num - 5 >= 0)
				num -= 5;
			else if (num - 2 >= 0)
				num -= 2;
			else if (num - 1 >= 0)
				num -= 1;
			cents++;
		}
		printf("%d\n", cents);
		}
	}

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
