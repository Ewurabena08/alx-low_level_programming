#include "lists.h"

/**
 * this function adds a new node at the beginning of a listint_t list.
 * add_nodeint - add new node at the beginning of a linked list
 * @head: points to the first node of the list
 * @n: data to be inserted in the new node
 *
 * Return: points to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
