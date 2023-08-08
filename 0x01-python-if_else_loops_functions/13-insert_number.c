#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - insert a node to a sorted list
 * @head: sorted list
 * @number: number to insert
 * Return: address of new node
 */
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *node, *temp;

    /* Allocate memory for the new node */
    node = malloc(sizeof(listint_t));
    if (node == NULL)
        return (NULL);

    /* If the list is empty, insert the new node as the head */
    if (*head == NULL)
    {
        node->n = number;
        node->next = *head;
        *head = node;
        return (node);
    }
    /* If the number is less than or equal to the head, insert at the beginning */
    else if (number <= (*head)->n)
    {
        node->n = number;
        node->next = *head;
        *head = node;
        return (node);
    }
    /* Find the appropriate position to insert the node while maintaining sorted order */
    else
    {
        temp = *head;
        while (node && node->next && node->next->n < number)
            node = node->next;

        temp->next = node->next;
        node->next = temp;
        return (temp);
    }
    
    /* Return NULL if insertion fails (this line will never be reached) */
    return (NULL);
}
