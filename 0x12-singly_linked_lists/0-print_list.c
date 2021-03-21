#include "lists.h"

/**
 *print_list - function that prints all elements of list_t list.
  *@h: head of linked list
 *Return: size_t
 */

size_t print_list(const list_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		c+=1;
	}
	return (c);
}
