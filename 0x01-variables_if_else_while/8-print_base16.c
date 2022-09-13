#include <stdio.h>
/**
 * main - entry point
 * Description: printing numbers of base 16
 * Return: Always 0
 */
int main(void)
{
	int a, n;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');

	for (n = 'a'; n <= 'f'; n++)
		putchar(n++);
	putchar('\n');
	return (0);
}
