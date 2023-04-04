#include "lists.h"
/**
 * free_listint - Freeing a linked list
 * @head: this is the head of the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
    listint_t *current_node;

    while (head != NULL)
    {
        current_node = head;
        head = head->next;
        free(current_node);
    }
}