#include "lists.h"

/**
  * get_nodeint_at_index - fills memory with a constant byte
  * @head: is the owner of the dog
  * @index: is a number
  * Return: a address
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *headcopy;
	unsigned int i;

	headcopy = head;
	if (headcopy != NULL)
	{
		for (i = 0; (i < index) && (headcopy != NULL); i++)
			headcopy = headcopy->next;
		return (headcopy);
	}
	else
		return (NULL);
}

