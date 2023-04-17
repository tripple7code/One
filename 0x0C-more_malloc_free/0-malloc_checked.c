#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/*
 *
 * main - allocates memory using malloc
 * return - pointer to the allocated memoriy
 *
 *
 *
 *
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
