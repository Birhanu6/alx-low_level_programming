#include "lists.h"

/**
  * reverse_listint - fills memory with a constant byte
  * @head: is the owner of the dog
  * Return: a number
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *headcopy, *savepoin;

	if (*head != NULL && (*head)->next != NULL)
	{
		headcopy = *head;
		savepoin = (*head)->next;
		(*head)->next = NULL;
		*head = savepoin;
		while ((*head)->next != NULL)
		{
			savepoin = (*head)->next;
			(*head)->next = headcopy;
			headcopy = *head;
			(*head) = savepoin;
		}
		(*head)->next = headcopy;
	}
	return (*head);
}

