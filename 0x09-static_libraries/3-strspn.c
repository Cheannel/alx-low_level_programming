#include "main.h"
#include <string.h>
/**
 * _strspn - entry point
 * description: a function that gets the length of a prefix substring
 * @s: the string
 * @accept: the prefix to be measured
 * Return: the number of bytes in the initial segment of 's'
 * which consist only of bytes from 'accept'
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int bytes = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
