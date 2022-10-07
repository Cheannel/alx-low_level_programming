#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - entry point
 * description: a function that concatenates two strings
 * @s1: the string to concatenate s2 on
 * @s2: the string that is joined to s1
 * @n: the number of bytes to be allocated
 * Return: NULL if the function fails,
 *else, a pointer to the concatenated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, len = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;
	concat = malloc(sizeof(char) * (len + 1));
	if (concat == NULL)
		return (NULL);
	len = 0;
	for (i = 0; s1[i]; i++)
		concat[len] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		concat[len++] = s2[i];
	concat[len] = '\0';
	return (concat);
}


