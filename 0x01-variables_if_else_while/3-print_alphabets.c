#include <stdio.h>
/**
 * main - entry point
 * Description: printing alphabets
 * Return: (0)
 */
int main(void)
{
	int letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}
	for (letters = 'A'; letters <= 'Z'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}

