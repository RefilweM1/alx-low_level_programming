#include "function_pointers.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the usm of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - return the difference of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - return the the product of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the product of two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - return the remainder of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the remainder of the division of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
