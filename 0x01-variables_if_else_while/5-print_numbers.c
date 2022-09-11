#include <stdio.h>
/**
 * main - entry point
 * Description: printing single digit numbers
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	putchar('\n');
	return (0);
}
