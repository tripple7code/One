#include <stdio.h>

/*
 * main - check the code
 *
 * Return: Always 0.
*/

int main(void)
{
	char *sh = "2-main.c";

	while (*sh)
	{
		putchar(*sh);
		sh++;
	}
	putchar('\n');

	return (0);
}
