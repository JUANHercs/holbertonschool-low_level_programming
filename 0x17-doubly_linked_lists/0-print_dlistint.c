#include"lists.h"
/**
 *print_listint - function to print list and elements
 *@h: pointer to the fist element of the struct list
 *Return: numeber of nodes
 **/
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
