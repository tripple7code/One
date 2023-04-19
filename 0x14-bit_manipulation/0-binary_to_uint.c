#include <stdio.h>
#include "main.h"
/*
 *
 *binary_to_unit converts binary numbers to an unsigned int.
 *
 *
 *
 *
 *
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = (result << 1) + (*b++ - '0');
	}
	return (result);
}
