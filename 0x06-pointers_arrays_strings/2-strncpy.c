#include "main.h"
#include <string.h>
/**
 * _strncpy - main block
 * description: a function that copies a file
 *@src: source string to copy
 *@dest: string to copy src
 *@n: number of string to be copied
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}

