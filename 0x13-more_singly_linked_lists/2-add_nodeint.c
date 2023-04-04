#include "lists.h"
/**
 * add_nodeint - adding a new node in the beginning of a linked list
 * @head: head of a list
 * @n: declaring a constant element n
 * Return: stop at NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
