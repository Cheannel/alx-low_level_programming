#include "main.h"
/**
 * _strcpy - entry point
 * description: a function that copies a string
 *@dest: the buffer
 *@src: string source
 *Return: @dest
 */
char *_strcpy(char *dest, char *src)
{
	int z = 0;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');

	return (dest);
}
