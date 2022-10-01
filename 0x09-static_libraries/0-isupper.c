#include "main.h"
/**
 * _isupper - entry point
 * @c: checks character
 * Return: 1 if character is uppercasr, 0 therwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
