#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data
 * doubly linked list
 * @head: pointer to head double linked list
 * Return: the sum of all the data n or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
