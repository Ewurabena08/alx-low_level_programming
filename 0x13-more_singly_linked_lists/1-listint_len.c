#include "lists.h"

/**
 *this is a function that returns the number of elements in a linked listint_t list.
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return:returns number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num2 = 0;

	while (h)
	{
		num2++;
		h = h->next;
	}

	return (num2);
}
