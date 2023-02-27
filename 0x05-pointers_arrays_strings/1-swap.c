#include "main.h"

/**
 * swap_int - swaps two int numbers
 * @a: pointer to first int
 * @b: pointer to second int
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	a = *b;

	b = temp;
}

