#include "lists.h"

/**
*a function that frees a listint_t list.
* @h: points to the first node in a linked list
 * free_listint_safe - frees a linked list
  *
 * Return: number of elements in freed list
 */
size_t free_listint_safe(listint_t **f)
{
	size_t leng = 0;
	int diff;
	listint_t *temp1;

	if (!f || !*f)
		return (0);

	while (*f)
	{
		diff = *f - (*f)->next;
		if (diff > 0)
		{
			temp1 = (*f)->next;
			free(*f);
			*f = temp1;
			leng++;
		}
		else
		{
			free(*f);
			*f = NULL;
			leng++;
			break;
		}
	}

	*f = NULL;

	return (leng);
}
