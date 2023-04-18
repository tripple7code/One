#include <stdio.h>
#include "main.h"
/*
 *
 *
 *
 *
 *
 *
 *
*/

unsigned int binary_to_uint(const char *b)
{
	if (!b)
		return (0);

	unsigned int j = 0;

	for (int i = 0; b[i]; i++)
	{
		if (b[i] == '1')
			j = (j << 1) | 1;
		else if (b[i] == '0')
			j <<= 1;
		else
			return (0);
	}
	return (j);
}
