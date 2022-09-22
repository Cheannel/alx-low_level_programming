#include "main.h"
#include <string.h>
/**
 * _strncat - main block
 * description: a function that concatenates two strings
 *@src: source string
 *@dest: destination
 *@n: number of characters
 *Return: a pointer to the resulting string 'dest'
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
