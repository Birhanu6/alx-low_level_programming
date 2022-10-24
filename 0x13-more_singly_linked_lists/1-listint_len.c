#include "lists.h"

/**
  * listint_len - fills memory with a constant byte
  * @h: is the number of elements
  * Return: a number
  */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}

