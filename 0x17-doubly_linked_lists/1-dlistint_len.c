#include"lists.h"
/**
 *dlistint_len - function that counts number of elemnts
 *@h: pointer to the fist element of the struct list
 *Return: numeber of nodes
 **/
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
