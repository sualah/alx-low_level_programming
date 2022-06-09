#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - Entry point
 * @n: number to check
 * Return: return nothing
 */
void positive_or_negative(int n)
{

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}

