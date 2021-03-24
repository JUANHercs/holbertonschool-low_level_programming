#include "lists.h"

/**
 *add_node - add a new node at the beginning of a list
 *@head: double pointer to head
 *@str: stirng data
 *Return: struct data
 */

list_t *add_node(list_t **head, const char *str)
{
	int c = 0;
	list_t *new = (list_t *) malloc(sizeof(list_t));

	if (head == NULL)
		exit(1);
	new->str = strdup(str);
	while (*(str + c) != '\0')
	{
		c++;
	}
	new->len = c;
	new->next = *head;
	*head = new;
	free(strdup);
	return (new);
}
