#include "main.h"
/**
  * condi_from - fills memory with a constant byte
  * @file_from: is the size of the pointer
  * Return: a int
  */
void condi_from(char *file_from)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	exit(98);
}
/**
  * condi_to - fills memory with a constant byte
  * @file_to: is the size of the pointer
  * Return: a int
  */
void condi_to(char *file_to)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
	exit(99);
}
/**
  * condi_fd - fills memory with a constant byte
  * @file: is the size of the pointer
  * Return: a int
  */
void condi_fd(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file);
	exit(100);
}
/**
  * main - fills memory with a constant byte
  * @argc: is the size of the pointer
  * @argv: a index
  * Return: a int
  */

int main(int argc, char **argv)
{
	int fd1 = 0, fd2 = 0, rd1 = 0, wr2 = 0;
	char *file_from, *file_to, buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];

	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
		condi_from(file_from);

	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
		condi_to(file_to);

	for (rd1 = read(fd1, buffer, 1024); rd1 > 0; rd1 = read(fd1, buffer, 1024))
	{
		wr2 = write(fd2, buffer, rd1);
		if (wr2 == -1)
			condi_to(file_to);
	}

	if (rd1 == -1)
		condi_from(file_from);

	if (close(fd1) == -1)
		condi_fd(file_from);

	if (close(fd2) == -1)
		condi_fd(file_to);
	return (0);
}

