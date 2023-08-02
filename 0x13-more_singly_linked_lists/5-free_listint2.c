#include "lists.h"

/**
 * a function that frees a listint_t list.
 * free_listint2 - frees linked list
 * @head: points to listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp1;

	if (head == NULL)
		return;

	while (*head)
	{
		temp1 = (*head)->next;
		free(*head);
		*head = temp1;
	}

	*head = NULL;
}
