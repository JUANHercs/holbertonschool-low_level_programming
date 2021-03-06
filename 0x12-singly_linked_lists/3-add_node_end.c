#include "lists.h"

/**
*add_node_end - adds a new node ant the end
*@head: doble pointer to head
*@str: data
*Return: address of new element Null if it failed
**/

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int c;
	list_t *new = (list_t *)malloc(sizeof(list_t));
	list_t *last = *head;

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (c = 0; str[c] != '\0'; c++)
		;
	new->len = c;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (last);
}
