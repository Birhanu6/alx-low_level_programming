#include "lists.h"

/**
  * add_nodeint - fills memory with a constant byte
  * @head: is the owner of the dog
  * @n: is a number
  * Return: a address
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}

