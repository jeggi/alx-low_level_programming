#include "lists.h"

/**
 * listint_len - returns lisnked list elements number
 * @h: head of a list
 * Return: numbers of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
