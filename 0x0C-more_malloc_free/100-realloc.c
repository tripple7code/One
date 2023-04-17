#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	void *new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return NULL;
	}

	memcpy(new_ptr, ptr, (new_size > old_size) ? old_size : new_size);
	free(ptr);

	return (new_ptr);
}
