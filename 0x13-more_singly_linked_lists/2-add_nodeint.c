#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/*
* add_nodeint - add node at beginning of a listint_t list.
*
* @head: head of double pointer
* @n: int add the list
* Return: NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	if (!head)
		return (NULL);

	listint_t *new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
