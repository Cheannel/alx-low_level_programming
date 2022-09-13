#include <stdio.h>
/**
 * main - entry point
 * Description: printing numbers of base 16
 * Return: Always 0
 */
int main(void)
{
	int a;
	char letter;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
