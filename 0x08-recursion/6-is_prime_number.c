#include "main.h"

/**
 * is_prime_number - check if number is a prime number
 *
 * @n: number to check
 * Return: return integer
 */

int helper(int i, int n)
{
	if (n % i != 0)
	{
		if (i > n)
			return (1);
		return (helper(i + 1, n));
	}
	return (0);
}

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (helper(2, n));
}
