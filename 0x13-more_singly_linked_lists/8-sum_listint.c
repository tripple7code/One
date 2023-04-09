#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * Return: sum all the data
 *
 *
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	for (; head; head = head->next)
		sum += head->n;

	return (sum);
}
