#include "lists.h"

/**
 * function that frees a listint_t list.
 * free_listint - frees linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head4)
{
	listint_t *temp2;

	while (head4)
	{
		temp2 = head4->next;
		free(head4);
		head4 = temp2;
	}
}
