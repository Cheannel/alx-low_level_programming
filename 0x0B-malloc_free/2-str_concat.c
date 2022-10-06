#include "main.h"
#include <stdlib.h>

/**
 * str_concat - main block
 * description: a function that concatenates two strings
 * @s1: the string s2 is concatenated to
 * @s2: the string to be joined to s2
 * Return: NULL on failure, otherwis, a pointer to the newly allocated space
 * which contains the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int index, concat_index = 0, len = 0;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index] || s2[index]; index++)
		len++;
	concat_str = malloc(sizeof(char) * len);
	if (concat_str == NULL)
		return (NULL);
	for (index = 0; s1[index]; index++)
		concat_str[concat_index++] = s1[index];
	for (index = 0; s2[index]; index++)
		concat_str[concat_index++] = s2[index];
	return (concat_str);
}


