#include <stdio.h>
#include "lists.h"

/**
 * print_list -this  prints all the elements of a linked list
 * @h: points to the list_t list to be printed
 *
 * Return:returns all the number of nodes printed
 */
size_t print_list(const list_t *h)
{
 size_t con = 0;

 while (h)
 {
 if (!h->str)
 printf("[0] (nil)\n");
 else
 printf("[%u] %s\n", h->len, h->str);
 h = h->next;
 con++;
 }

 return (con);
}
