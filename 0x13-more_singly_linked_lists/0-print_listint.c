#include "lists.h"

/**
  * print_listint - fills memory with a constant byte
  * @h: is the number of elements
  * Return: the number of nodes
  * mfork na ujanja(@nixon_okoth github)
  */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}

