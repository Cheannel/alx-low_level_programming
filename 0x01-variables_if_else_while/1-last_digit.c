#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description: printing the last digit of a number
 * Return: (0)
 */
int main(void)
{
	int n, z;

	srand(time(0));
			n = rand() - RAND_MAX / 2;
			z = n * 2;				
			if (n > 5)
			{
			printf("Last digit 0f %d is %d and is greater than 5\n", n, z);
			}
			else if (n == 0)
			{
		printf("Last digit of %d is %d and is 0\n", n, z);
		}
		else if (n < 6 && z != 0)
		{
          	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, z);
	}
return (0);
}
