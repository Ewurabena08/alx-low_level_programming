#include "lists.h"

/**
 * a function that adds a new node at the end of a listint_t list.
 * add_nodeint_end - add node at the end of a linked list
 * @head: points to the first element in the linked list
 * @n: data to be inserted in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new3;
	listint_t *temp1 = *head;

	new3 = malloc(sizeof(listint_t));
	if (!new3)
		return (NULL);

	new3->n = n;
	new3->next = NULL;

	if (*head == NULL)
	{
		*head = new3;
		return (new3);
	}

	while (temp1->next)
		temp1 = temp1->next;

	temp1->next = new3;

	return (new3);
}
