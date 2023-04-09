#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);
	free(head);
}
