#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
* @head: A points to the head of the listint_t to check.
* a function that prints a listint_t linked list.
 * looped_listint_len - Counts the number of unique nodes in looped listint_t linked list.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in a list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tort, *hare1;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tort = head->next;
	hare1 = (head->next)->next;

	while (hare1)
	{
		if (tort == hare1)
		{
			tort = head;
			while (tort != hare1)
			{
				nodes++;
				tort = tort->next;
				hare1 = hare1->next;
			}

			tort = tort->next;
			while (tort != hare1)
			{
				nodes++;
				tort = tort->next;
			}

			return (nodes);
		}

		tort = tort->next;
		hare1 = (hare1->next)->next;
	}

	return (0);
}

/**
 * @head: A pointer to the head of the listint_t list.
 * Return: The number of nodes in the list.
 * print_listint_safe - Prints a listint_t list safely.
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
