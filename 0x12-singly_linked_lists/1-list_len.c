#include "lists.h"

/**
  * list_len - fills memory with a constant byte
  * @h: is the owner of the dog
  * Return: a number
  */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);

	if (h->next == NULL)
		return (1);

	return (1 + list_len(h->next));
}

