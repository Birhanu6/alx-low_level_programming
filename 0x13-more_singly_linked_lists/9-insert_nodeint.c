#include "lists.h"

/**
  * insert_nodeint_at_index - fills memory with a constant byte
  * @head: is the owner of the dog
  * @idx: is the index
  * @n: is a number
  * Return: a address
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *headcopy;
	unsigned int i;

	headcopy = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = headcopy;
		*head = new;
		return (new);
	}

	for (i = 0; (i < idx - 1); i++)
	{
		if (headcopy == NULL)
		{
			free(new);
			return (NULL);
		}
		headcopy = headcopy->next;
	}
	new->next = headcopy->next;
	headcopy->next = new;
	return (new);
}

