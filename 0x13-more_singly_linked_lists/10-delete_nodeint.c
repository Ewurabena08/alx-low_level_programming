#include "lists.h"

/**
 * @head: pointer to the first element in the list
*a function that deletes the node at index index of a listint_t linked list
* @index: index of the node to be deleted
 * delete_nodeint_at_index - deletes a node in the linked list at a given index
  *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp7 = *head;
	listint_t *current = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp7);
		return (1);
	}

	while (j < index - 1)
	{
		if (!temp7 || !(temp7->next))
			return (-1);
		temp7 = temp7->next;
		j++;
	}

	current = temp7->next;
	temp7->next = current->next;
	free(current);

	return (1);
}
