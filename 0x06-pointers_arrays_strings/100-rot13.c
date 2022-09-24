#include "main.h"
#include <string.h>
/**
 * rot13 - main block
 * Description: a function that encodes a string using rot13.
 * @str: the string to be encoded
 * Return: a pointer to the encoded string
 */
char *rot13(char *str)
{
	int indx1 = 0, indx2;
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13key[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (str[indx1])
	{
		for (indx2 = 0; indx2 < 52; indx2++)
		{
			if (str[indx1] == alphabet[indx2])
			{
				str[indx1] = rot13key[indx2];
				break;
			}
		}
		indx1++;
	}
	return (str);
}
