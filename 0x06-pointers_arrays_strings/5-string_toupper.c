#include "main.h"
#include <string.h>
/**
 * string_toupper - entry point
 * Description: a function that changes all lowercase
 * letters of a string to uppercase
 * @str: the string
 * Return: pointer to the string
 */
char *string_toupper(char *str)
{
	int uppercase = 0;

	while (str[uppercase])
	{
		if (str[uppercase] >= 'a' && str[uppercase] <= 'z')
			str[uppercase] -= 32;
		uppercase++;
	}
	return (str);
}

