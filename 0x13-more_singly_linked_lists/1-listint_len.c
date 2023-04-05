#include "lists.h"
#include <stddef.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list
 *
 * @h: pointer to the head of the linked list
 *
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
    if (h == NULL)
        return 0;

    return (1 + listint_len(h->next));
}
