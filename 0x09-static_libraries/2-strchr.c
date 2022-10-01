#include "main.h"
#include "string.h"
/**
 * _strchr - main block
 * descriotion: function that locates a character in a string.
 * @s: a string
 * @c: the character
 * Return: null if character not found
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
