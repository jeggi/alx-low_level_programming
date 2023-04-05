#include "lists.h"
/**
 *get_nodeint_at_index - this function returns the ninth node of a list
 *@head: this is the head of the node
 *@index: this is the index
 *Return: the ninth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;

	while (c < index)
	{
		head = head->next;
	}
	c++;
	return (head);
}
