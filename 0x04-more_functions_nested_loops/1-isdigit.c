#include "main.h"
/**
 * _isdigit - entry point
 * Description: checks for a digit
 * @c: the integer variable
 * Return: 1 if variable is a digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
