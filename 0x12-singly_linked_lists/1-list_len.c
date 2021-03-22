#include "lists.h"

/**
 *list_len - function that returns the number of elements in a linked list
 *@h: list
 *Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
