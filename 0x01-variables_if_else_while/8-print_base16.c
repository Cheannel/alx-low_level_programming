#include <stdio.h>
/**
 * main - entry point
 * Description: printing numbers of base 16
 * Return: (0)
 */
int main(void)
{
	int x, y;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		for (y = 'a'; y <= 'f'; y++)
		{
			putchar(y);
		}
	}
		putchar('\n');
		return (0);
}
