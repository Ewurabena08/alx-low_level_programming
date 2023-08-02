#include "lists.h"

/**
 * a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
 * pop_listint - deletes the head node of linked list
 * @head: points to the first element in a linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp6;
	int num1;

	if (!head || !*head)
		return (0);

	num1 = (*head)->n;
	temp6 = (*head)->next;
	free(*head);
	*head = temp6;

	return (num1);
}
