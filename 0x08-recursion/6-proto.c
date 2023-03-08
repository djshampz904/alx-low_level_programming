#include "main.h"

/**
 * is_prime_number - check if number is a prime number
 *
 * @n: number to check
 * Return: return integer
 */

int helper(int i, int n)
{
	if (n % i != 0) // if n is not divisible by i
	{
		if (i > n) // if i is greater that n then it is prime cause
			return (1);  // n is prime number
		return (helper(i + 1, n)); // revursively call helper
	}
	return (0); // if it is divisible by i it is not prime number
}

int is_prime_number(int n)
{
	if (n <= 1)	//if n is less than or equal to 1 it is not prime
		return (0);
	return (helper(2, n));  //start checking from 2 since we are not checking 1
}
