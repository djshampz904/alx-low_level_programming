#include "main.h"

/**
 * helper - check if number is a prime number
 *
 * @n: number to check
 * @i: number to check
 * Return: return integer
 */

int helper(int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (helper(i + 1, n));
	return (1);
}

/**
 * is_prime_number - check if its prime number
 *
 * @n: integer to check
 * Return: integer
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (helper(2, n));
}
