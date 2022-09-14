#include "main.h"
/**
 * _islower - entry point
 * Description: checks if a character is lowercase
 * Return: 1 if character is lowercase, otherwise 0
 * @c: integer value
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
