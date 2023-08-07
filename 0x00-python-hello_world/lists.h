#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - A singly linked list
 * @n: Integer
 * @next: A pointer to the next node
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/*Function to print elements of a linked list*/
size_t print_listint(const listint_t *h);

/*Function to add a new node to the beginning of a linked list*/
listint_t *add_nodeint(listint_t **head, const int n);

/*Function to free memory allocated for a linked list*/
void free_listint(listint_t *head);

/*Function to check if a linked list has a cycle*/
int check_cycle(listint_t *list);

#endif
