#include "main.h"
#include <string.h>
/**
 * _strcmp - entry point
 * Description: a function that compares two strings
 *@s1: string to compare
 *@s2: string to compare
 * Return: 0 if s1 is the same as s2, return < 0 if s1 is less than s2
 * otherwise returns > 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
