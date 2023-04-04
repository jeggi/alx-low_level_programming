#include "lists.h"
/**
 * free_listint - Freeing a linked list
 * @head: this is the head of the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *empty;
		while((empty = head) !=NULL)
		{
			head = head->next;
			free(empty);
		}
}
