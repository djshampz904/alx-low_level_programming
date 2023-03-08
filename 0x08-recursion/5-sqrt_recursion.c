#include "main.h"

/**
 * myhelper - help getting the sqaures
 *
 * @i: number to square
 * @n: number to check sqaure root
 * Return: zero or 1
 */

int myhelper(int i, int n)
{
	int j;

	if (i * i != n)
	{
		if (i > n)
		{
			return (-1);
		}
		j = myhelper(i + 1, n);
		return (j + 1);
	}
	return (0);
}

/**
 * _sqrt_recursion - returns natural square
 *
 * @n: integer to check
 * Return: integer sqaure root
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (myhelper(i, n) == n && n != 1)
		return (-1);
	return (myhelper(i, n));
}
