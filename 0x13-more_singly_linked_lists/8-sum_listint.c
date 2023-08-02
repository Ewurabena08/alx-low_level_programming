#include "lists.h"

/**
* @head: first node in the linked list
*a function that returns the sum of all the data (n) of a listint_t linked list.
 * sum_listint - calculates the sum of the data in a listint_t list
  *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum1 = 0;
	listint_t *temp5 = head;

	while (temp5)
	{
		sum1 += temp5->n;
		temp5 = temp5->next;
	}

	return (sum1);
}
