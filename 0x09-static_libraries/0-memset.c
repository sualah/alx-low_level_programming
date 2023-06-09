#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 *
 * @s: pointer to string
 * @b: constant byte
 * @n: first bytes of memory area pointed by s
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		ptr[i] = b;
	}
	return (s);
}

