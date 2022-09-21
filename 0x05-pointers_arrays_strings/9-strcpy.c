#include "main.h"
/**
 * _strcpy - entry point
 * description: a function that copies a string
 *@dest: the buffer
 *@src: string source
 *Return:@dest
 */
char *_strcpy(char *dest, char *src)
{
	int z = 0;

	while (src[z])
	{
		dest[z] = src[z];
		z++;
	}
	return (dest);
}
