#include "lists.h"

/**
  * free_listint - fills memory with a constant byte
  * @head: is the owner of the dog
  * Return: a number
  */
void free_listint(listint_t *head)
{
	listint_t *savepoin;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			savepoin = head->next;
			free(head);
			head = savepoin;
		}
		free(head);
	}
}

