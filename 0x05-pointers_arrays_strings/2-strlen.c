#include "main.h"
/**
 * _strlen - entry point
 * description: returns the length of a string
 * @s
 * Return: length of s
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
