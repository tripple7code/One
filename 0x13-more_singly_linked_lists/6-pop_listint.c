#include "lists.h"
#include <stdlib.h>

int pop_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (0);

	int n = (*head)->n;
	listint_t *temp = *head;
	
	*head = (*head)->next;
	free(temp);

	return (n);
}
