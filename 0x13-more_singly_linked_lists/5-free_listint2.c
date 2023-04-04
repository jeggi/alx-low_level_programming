#include "lists.h"
/**
 *free_listint2 - freeeing a liked list
 *@head: this is the head of the list
 *Return: empty
*/
void free_listint2(listint_t **head)
{
	listint_t *tempo;
	listint_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((tempo = current) != NULL)
		{
			current = current->next;
			free(tempo);
		}
		*head = NULL;
	}
}
