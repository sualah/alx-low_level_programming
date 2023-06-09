#include "main.h"
/**
 * search_prime - return 1 if number is prime and 0 otherwise
 * @n: number
 * @div: nuber
 *
 * Return: number
 */
int search_prime(int n, int div)
{
	if (div * div > n)
		return (1);
	if (n % div == 0)
		return (0);
	return (search_prime(n, div + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * ,otherwise return 0
 * @n: number
 *
 * Return: number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (search_prime(n, 2));
}

