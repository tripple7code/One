#include "lists.h"
#include <stdio.h>

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	while (index && head->next)
	{
		head = head->next;
		index--;
	}
	return (index == 0 ? head : NULL);
}
