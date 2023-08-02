#include "lists.h"

/**
 *a function that returns the nth node of a listint_t linked list.
 * @head: first node in the linked list
 * get_nodeint_at_index - returns node at a certain index in a linked list
 *
 * Return: points to the node we're looking for, or points to NULL
 * @index: index of a node to be returned
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp1 = head;

	while (temp1 && j < index)
	{
		temp1 = temp1->next;
		j++;
	}

	return (temp1 ? temp1 : NULL);
}
