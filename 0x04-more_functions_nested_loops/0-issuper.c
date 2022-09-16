#include "main.h"
/**
 * _isupper - entry point
 * Description: checks for uppercase character
 * @c: the integer variable
 * Return: 1 if character is uppercase, otherwise return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
