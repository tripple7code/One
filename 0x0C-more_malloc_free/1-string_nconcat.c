#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/*
 * main - concatenantes two strings
 *
 * Return: pointer pointing to the newly allocated memory space
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = s1 ? strlen(s1) : 0;
	unsigned int len2 = s2 ? strlen(s2) : 0;
	unsigned int len = len2 > n ? n : len2;
	char *result = malloc(len1 + len + 1);

	if (result == NULL)
		return (NULL);

	strcpy(result, s1 ? s1 : "");
	strncat(result + len1, s2 ? s2 : "", len);

	return (result);
}
