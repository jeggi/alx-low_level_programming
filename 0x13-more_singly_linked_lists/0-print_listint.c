#include "lists.h"

/**
*print_list - function that prints all the element of a list
*@h: variable pointing to the head
*Return: the number of the nodes
*/

size_t print_listit(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}

return (count);

}		
