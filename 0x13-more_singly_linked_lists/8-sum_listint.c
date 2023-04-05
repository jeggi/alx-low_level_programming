#include "lists.h"
/**
 *sum_listint - sum the nodes in a list
 *@head: this is the head of the node
 *Return: the sum of all nodes
 */
int sum_listint(listint_t *head)
{
	listint_t sum;
	head != NULL;

	for (sum = 0; head != NULL; sum += head->n)
	{
		head = head->next;
	}
	return (sum);
}
