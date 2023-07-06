#include "main.h"

/**
 * get_bit - A function that gets a bit at index
 * @n: number of bit
 * @index: index of bit
 * Return: The value of the bit or -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);

	if ((n & max))
		return (1);
	else
		return (0);
}
