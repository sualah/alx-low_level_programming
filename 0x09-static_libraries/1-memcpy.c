#include "main.h"

/**
 * _memcpy - a function that copies memory area
 *
 * @dest: pointer to memory destination
 * @src: pointer to memory source
 * @n: number of bytes
 *
 * Return: a string pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (ptr);
}
