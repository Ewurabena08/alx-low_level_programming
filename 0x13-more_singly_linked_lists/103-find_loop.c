#include "lists.h"

/**
 * @head: linked list to search for
 * a function that finds the loop in a linked list.
 * find_listint_loop - finds the loop in a linked list
 *
 * Return: returns address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow2 = head;
	listint_t *fast2 = head;

	if (!head)
		return (NULL);

	while (slow2 && fast2 && fast2->next)
	{
		fast2 = fast2->next->next;
		slow2 = slow2->next;
		if (fast2 == slow2)
		{
			slow2 = head;
			while (slow2 != fast2)
			{
				slow2 = slow2->next;
				fast2 = fast2->next;
			}
			return (fast2);
		}
	}

	return (NULL);
}
