#include "main.h"

/**
 * reverse_array - reverse array
 * @a:  1st argument
 * @n: 2nd argument
 *
 * Description: reverse the content of an array of integers
 * Return: value
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	n--;
	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
