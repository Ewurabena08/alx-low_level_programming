#include "lists.h"

/**
*a function that reverses a listint_t linked list.
*@head: points to the first node in a list
 * reverse_listint - reverses a linked list
 *
 * Return: points to the first node in a new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev1 = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev1;
		prev1 = *head;
		*head = next;
	}

	*head = prev1;

	return (*head);
}
