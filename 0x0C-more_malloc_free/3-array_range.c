#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
 * min - minimum range of values stored
 *
 * max - maximum range of values stored
 *
 * Return: pointer to new array
*/

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
		ptr[i] = min + i;

	return (ptr);
}
