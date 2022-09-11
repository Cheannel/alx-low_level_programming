#include <stdio.h>
/**
 * main - entry point
 * Description: printing alphabet in reverse
 * Return: (0)
 */
int main(void)
{
	char let;

	for (let = 'z'; let >= 'a'; let++)
	{
		putchar(let);
	}
	putchar(let);
	return (0);
}
