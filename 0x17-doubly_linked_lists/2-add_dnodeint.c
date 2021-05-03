#include"lists.h"
/**
 *add_dnodeint - function pointer to add new node
 *@head:pointer to pointer to the first element of the struct list
 *@n: node data
 *Return:fail if head doesnt exist address of new node
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node || head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head)
		(*head)->prev = new_node;
	*head = new_node;
	return (*head);
}
