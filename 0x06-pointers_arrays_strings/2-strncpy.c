#include "main.h"

/**
 * _strncpy - a function that copies a string.
 *
 * @dest: a pointer to string destination
 * @src: a pointer to string source
 * @n: number of bytes from src
 *
 * Return: pointer to string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len_src = 0;

	while (len_src < n)
	{
		dest[len_src] = src[len_src];
		len_src++;
	}
	return (dest);
}

