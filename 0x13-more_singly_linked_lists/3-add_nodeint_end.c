#include "lists.h"
/**
 * add_nodeint_end - adding element to the end of a linked list
 * @head: struct pointer;
 * @n: data
 * Return: The address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;
	listint_t *temp;


	add = malloc(sizeof(listint_t));
	if(add == NULL)
		return (NULL);
	add->n = n;
	add->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = add;
	}
	else
	{	
		while(temp->next !=NULL)
		{
			temp =temp->next;
		}
		temp->next = add;
	}
return (*head);
}


