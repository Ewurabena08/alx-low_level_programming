#include "lists.h"

/**
 * @head: points to the first node in the list
* a function that inserts a new node at a given position
 * @n: data to insert in the new node
 * insert_nodeint_at_index - inserts a new node in a linked list, at a given position
 * @idx: index where the new node is added
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new4;
	listint_t *temp1 = *head;

	new4 = malloc(sizeof(listint_t));
	if (!new4 || !head)
		return (NULL);

	new4->n = n;
	new4->next = NULL;

	if (idx == 0)
	{
		new4->next = *head;
		*head = new4;
		return (new4);
	}

	for (j = 0; temp1 && j < idx; j++)
	{
		if (j == idx - 1)
		{
			new4->next = temp1->next;
			temp1->next = new4;
			return (new4);
		}
		else
			temp1 = temp1->next;
	}

	return (NULL);
}
