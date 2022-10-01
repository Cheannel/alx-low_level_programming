#include "main.h"
#include <string.h>
/**
 * _strpbrk - entry point
 * description: function locates the first occurrence in the string 's'
 * of any of the bytes in the string accept
 * @s: string to  be searched
 * @accept: the set of bytes to search for
 * Return: a pointer to the matched byte, if a set is matched;
 * returns null, if no set set is matched.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
