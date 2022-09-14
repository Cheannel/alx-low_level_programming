#include <stdio.h>
/**
 * main - entry point
 * Description: printing underscore putchar(_putchar\n)
 * Return: always 0
 */
int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	while (str[i] != '\0')
	{
		char c = str[i];

		putchar(c);
		i++;
	}
	return (0);
}

