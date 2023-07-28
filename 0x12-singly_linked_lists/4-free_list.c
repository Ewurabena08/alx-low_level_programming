#include <stdlib.h>
#include "lists.h"

/**
 * this script is a function that frees a list_t list
 * @head: list_t list that are to be freed
 * free_list - frees the linked list
 **/
void free_list(list_t *head)
{
 list_t *temp2;

 while (head)
 {
 temp2 = head->next;
 free(head->str);
 free(head);
 head = temp2;
 }
}
