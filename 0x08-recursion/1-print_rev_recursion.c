#include "main.h"

/**
 * _print_rev_recursion - prints
 * a string in reverse
 * @s:string
 * Return : void
**/

void _print_rev_recursion(char *s)/* know what you do*/
{
if (*s)
{
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
else
{
	_putchar('\n');
}
}

