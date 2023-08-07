#include "lists.h"

/**
 * check_cycle - function checks if a singly linked list has a cycle in it.
 * @list: pointer to the beginning of the node
 * Return: 0 if no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	/*Declare two pointers, 'current' and 'check', to traverse the linked list*/
	listint_t *current, *check;

	/*If the list is empty or has only one element, there can't be a cycle*/
	if (list == NULL || list->next == NULL)
		return (0);

/*
 * Initialize 'current' to the start of
 * the list and 'check' to the second node
 */
	current = list;
	check = current->next;

	/*Traverse the list using two pointers, 'current' and 'check'*/
	while (current != NULL && check->next != NULL
		&& check->next->next != NULL)
	{
/*
 * If the 'current' pointer
 * catches up to the 'check' pointer, a cycle is detected
 */
		if (current == check)
			return (1);

		/*Move 'current' one step and 'check' two steps ahead in the list*/
		current = current->next;
		check = check->next->next;
	}

	/*If the loop completes without detecting a cycle, return 0 (no cycle)*/
	return (0);
}
