#include "main.h"

/**
  * read_textfile - fills memory with a constant byte
  * @filename: is the size of the pointer
  * @letters: a index
  * Return: a int
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	ssize_t lettercompa = 0, i = 0;
	void *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	lettercompa = read(fd, buffer, letters);
	if (lettercompa == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	i  = write(STDOUT_FILENO, buffer, lettercompa);
	if (i == -1 || i != lettercompa)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (i);
}

