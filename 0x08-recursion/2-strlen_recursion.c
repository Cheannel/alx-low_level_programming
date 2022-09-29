#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - entry point
 * description: a function that returns the length of a string
 * @s: the string
 * Return: length of 's'
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
