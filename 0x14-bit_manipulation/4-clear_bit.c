#include "main.h"

/*
 *
 *
 *
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n ^= (-0 ^ *n) & (1UL << index);
	return (1);
}
