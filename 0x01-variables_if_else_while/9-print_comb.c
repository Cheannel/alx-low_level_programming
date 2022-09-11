#include <stdio.h>
/**
 * main - main block
 * Description: printing combinations of single-digit numbers
 * Return: (0)
 */
int main(void)
{
	int z;

	for (z = '0'; z <= '9'; z++)
	{
		putchar(z);
		if (z != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
