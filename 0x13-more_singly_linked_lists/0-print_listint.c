#include "lists.h"
#include "stdio.h"

/**
*print_list - function that prints all the element of a list
*@h: variable pointing to the head
*Return: the number of the nodes
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *c = h;
	size_t cnodes = 0;

	while (c)
	{
		printf("%i\n", h->n);
		c = c->next;
		cnodes++;
	}

return (cnodes);

}		
