#include "main.h"
/**
 * rev_string - entry point
 * description: reverses a string
 * @s: the string
 */
void rev_string(char *s)
{
	int len, a, rev;
	char tmp;

	for (len = 0; s[len] != '\0'; len++)
	a = 0;
	rev = len / 2;

	while (rev--)
	{
		tmp = s[len - a - 1];
		s[len - a - 1] = s[a];
		s[a] = tmp;
		a++;
	}
}

