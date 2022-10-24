#include "lists.h"

/**
  * pop_listint - fills memory with a constant byte
  * @head: is the owner of the dog
  * Return: a number
  */
int pop_listint(listint_t **head)
{
	listint_t *savepoin;
	int savenum;

	if (*head != NULL)
	{
		savepoin = (*head)->next;
		savenum = (*head)->n;
		free(*head);
		*head = savepoin;
		return (savenum);
	}
	else
		return (0);
}

