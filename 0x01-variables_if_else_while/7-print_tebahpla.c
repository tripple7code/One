#include <stdio.h>

/**
 * main - reverse alphabet in lowercase
 * Return: 0
*/
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}
