#include "main.h"
#include <string.h>
/**
 * string_toupper - entry point
 * Description: a function that changes all lowercase
 * letters of a string to uppercase
 * @str: the string
 * Return: always 0
 */
char *string_toupper(char *str)
{
	int uppercase = 0;

	while (uppercase >= 'a' && uppercase <= 'z')
	{
		uppercase++;
		str[uppercase] -= 32;
	}
	return (0);
}

