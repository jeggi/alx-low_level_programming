#include "lists.h"
/**
 *free_listint2 - freeeing a liked list
 *@head: this is the head of the list
 *Return: empty
*/
void free_listint2(listint_t **head)
{
    listint_t *current_node;

    if (head == NULL)
        return;

    while (*head != NULL)
    {
        current_node = *head;
        *head = (*head)->next;
        free(current_node);
    }
}
