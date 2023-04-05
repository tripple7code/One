#include <stdio.h>

int main(int argc, char *argv[])
{
	int count;

	printf("Total is %s\n", argv[0]);
	if (argc > 1)
	{
	for (count = 1; count < argc; count++)
	{
	printf("argv[%d] = %s\n", count, argv[count]);
	}
	}
	else
	{
	printf("No other arguments.\n");
	}
	return (0);
}
