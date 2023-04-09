#include "lists.h"
#include <stdlib.h>

/*
 *insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head of the linked list
 * @idx: index of the node where the new node is to be inserted
 * @n: value to be stored in the new node
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current, *new_node;

	if (head == NULL)
		return (NULL);
	{
		current = *head;
		for (i = 0; i < idx - 1 && current != NULL; i++);
		current = current->next;

		if (current == NULL)
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
