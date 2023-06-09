#include "main.h"

/**
 * sqrt_binary_search - search for number using binary search
 * algorithm
 * @n: number
 * @start: number
 * @stop: number
 *
 * Return: number
 */
int sqrt_binary_search(int n, int start, int stop)
{
	if (start <= stop)
	{
		int mid = (start + stop) / 2;
		int square = mid * mid;

		if (square == n)
			return (mid);
		if (square < n)
			return (sqrt_binary_search(n, mid + 1, stop));
		return (sqrt_binary_search(n, start, mid - 1));
	}
	return (stop);
}
/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number.
 * @n: number
 *
 * Return: number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_binary_search(n, 1, n));
}

