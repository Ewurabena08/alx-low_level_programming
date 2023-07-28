#include <stdlib.h>
#include "lists.h"

/**
 * this script Writes a function that returns the number of elements in a linked list_t list
 * list_len - returns elements in a linked list
 * @h: points to the list_t list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
 size_t e = 0;

 while (h)
 {
 e++;
 h = h->next;
 }
 return (e);
}
