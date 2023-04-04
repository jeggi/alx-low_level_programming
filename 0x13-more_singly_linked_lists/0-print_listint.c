#include "lists.h"
#include "stdio.h"

/**
*print_list - function that prints all the element of a list
*@h: variable pointing to the head
*Return: the number of the nodes
*/

size_t print_listint(const listint_t *h)
{
    const listint_t *current = h;
    size_t s = 0;

    while (current)
    {
        printf("%d\n", current->n);
        s++;
        current = current->next;
    }

    return (s);
}