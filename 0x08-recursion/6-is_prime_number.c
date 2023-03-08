#include "main.h"
int is_prime_helper(int n, int i);

/**
 * is_prime_helper - help to find primes
 * @n: number
 * @i: result of divison
 *
 * Return: 1 if is prime and 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (i >= n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, i + 1));
	}
}

/**
 * is_prime_number -  a function that returns 1 if
 * the input integer is a prime number, otherwise return 0.
 *
 * @n: number
 *
 * Result: return 1 if n is prime and 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n <= 3)
	{
		return (1);
	}
	return (is_prime_helper(n, 2));
}
