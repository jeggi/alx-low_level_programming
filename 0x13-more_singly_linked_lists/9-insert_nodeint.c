#include "lists.h"
/**
 *insert_nodeoint_at_index - this insert new node at a givien position
 *@head: this is the head of the node
 *@idx: this is an int
 *@n: this is an int also
 *Return: NULL
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node, *temp;
    unsigned int i;

    if (head == NULL)
        return (NULL);

    if (idx == 0)
    {
        new_node = malloc(sizeof(listint_t));
        if (new_node == NULL)
            return (NULL);
        new_node->n = n;
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    temp = *head;
    for (i = 0; i < idx - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL)
        return (NULL);

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);
    new_node->n = n;
    new_node->next = temp->next;
    temp->next = new_node;

    return (new_node);
}
