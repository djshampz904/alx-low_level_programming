#include "3-calc.h"
#include <stdio.h>
#include <string.h>
/**
 * op_add - adds two numbers
 *
 * @a: first integer
 * @b: second integer
 * Return: result integer
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two values
 *
 * @a: first value
 * @b: second value
 * Return: result of the subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two values
 *
 * @a: first value'
 * @b: second value
 * Return: result of multiplying
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two values
 *
 * @a: first value
 * @b: second value
 *
 * Return: result of divison
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the modulus of two values
 *
 * @a: integer to check
 * @b: integer to check
 *
 * Return: result integer
 */

int op_mod(int a, int b)
{
	return (a % b);
}
