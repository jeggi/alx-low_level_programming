#include "lists.h"
/**
 * add_nodeint - adding a new node in the beginning of a linked list
 * @head: head of a list
 * @n: declaring a constant element n
 * Return: stop at NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;
       	add = malloc(sizeof(listint_t));
	
	if(add == NULL)
	{
	 	return (NULL);
	}
	add->n = n;
	add->next = *head;
	*head = add;

return (*head);
}
