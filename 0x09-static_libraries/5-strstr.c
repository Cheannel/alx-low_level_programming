#include "main.h"
#include <string.h>
/**
 * _strstr - main block
 * description: function finds the first occurrence of the substring 'needle'
 * in the string 'haystack'
 * @needle: the substring to locate
 * @haystack: the string to locate from
 * Return: a pointer to the beginning of the located substring,
 * if substring not found, returns null.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;
		if (needle[i] == haystack[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
