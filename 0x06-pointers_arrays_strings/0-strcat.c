#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcat - entry point
 * description: concatenates two strings
 * Return: a pointer to the resulting string dest
 *@dest: destination
 *@src: source string
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
