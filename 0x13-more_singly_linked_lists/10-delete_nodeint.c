#include "lists.h"

/**
 *delete_nodeint_at_index - this function deletes the node at the index
 *@head: this is the head of the node
 *@index: unsinged integer of the node
 *Return: 1 if it is successful
 */
 
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *left;
	listint_t *right;

	left = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && left != NULL; i++)
		{
			left = left->next;
		}
	}

	if (left == NULL || (left->next == NULL && index != 0))
		return (-1);

	right = left->next;

	if (index != 0)
	{
		left->next = right->next;
		free(right);
	}
	else
	{
		free(left);
		*head = right;
	}

	return (1);
}
