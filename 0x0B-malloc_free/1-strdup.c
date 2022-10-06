#include "main.h"
#include <stdlib.h>

/**
 * _strdup - main block
 * description: function returns a pointer to a new string
 * which is a duplicate of the string 'str'
 * @str: the string
 * Return: NULL if 'str' = 0 and if insufficient memory was available,
 * otherwise return a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int i, len = 0;
	char *cpy;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	       len++;
	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		cpy[i] = str[i];
	cpy[len] = '\0';
	return (cpy);
}
