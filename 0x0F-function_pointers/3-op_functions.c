#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


/**
 * op_add - entry point
 * description: this function returns the sum of two numbers
 * @a: the first number to be added
 * @b: the second number to be added
 * Return: the sum of 'a' and 'b'
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - entry point
 * description: this function returns the difference between two numbers
 * @a: the number to be subtracted from
 * @b: the number to be subtracted
 * Return: the difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - entry point
 * description: this function returns the multiplication of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - entry point
 * description: this function returns the result of the division of a by b
 * @a: the dividend; number to be divided by another
 * @b: the divider; number to divide another number
 * Return: the quotient; the result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - entry point
 * description: function returns the remainder of the division of two numbers
 * @a: the dividend
 * @b: the divider
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
