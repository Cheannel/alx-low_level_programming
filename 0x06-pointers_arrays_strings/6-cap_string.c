#include "main.h"
#include <string.h>
/**
 * cap_string - entry point
 * Description: a function that capitalizes all words of a string
 * @str: the string to be capitalized
 * Return: a pointer to the string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == ',' || str[i] == ';' || str[i] == '.'
		|| str[i] == '!' || str[i] == '?' || str[i] == '"'
		|| str[i] == '(' || str[i] == ')' || str[i] == '{'
		|| str[i] == '}')

		i++;
	}
	return (str);
}
