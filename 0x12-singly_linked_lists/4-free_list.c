#include "lists.h"

/**
*free_lists -  free a list
*@head: pointer to head
*Return: address head
**/

void free_list(list_t *head)
{
	list_t *new;

	while (head != NULL)
	{
		new = head->next;
		free(head->str);
		free(head);
		head = new;
	}
}
