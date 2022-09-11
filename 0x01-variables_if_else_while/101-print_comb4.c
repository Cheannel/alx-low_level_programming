#include <stdio.h>
/**
 * main - main block
 * Description: printing different combinations of 3 digits
 * Return: (0)
 */
int main(void)
{
	int x, y, z;

	for (x = '0'; x <= '7'; x++)
	{
		for (y = '1'; y <= '8'; y++)
		{
			for (z = '2'; z <= '9'; z++)
			{
				putchar((x % 10) + '0');
			putchar((y % 10) + '0');
			putchar((z % 10) + '0');
			if (x < y < z)
			{
				putchar(',');
					putchar(' ');
			}
			else
			{
			}
		}
	}
	}
			putchar('\n');
			return (0);
}

