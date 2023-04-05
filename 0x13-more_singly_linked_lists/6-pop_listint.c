#include "lists.h"
/**
 *pop_listint - This deletes the head of the listint
 *@head: this is a double pointer
 *Return: thid would return nothing
 */

int pop_listint(listint_t **head)
{
	listint_t *curr_head;
	int head_var;

	if ((head == NULL) && (*head == NULL))
		return (0);
	curr_head = *head;
	head_var = curr_head->n;
	*head = curr_head->next;
	free(curr_head);

	return (head_var);
}

