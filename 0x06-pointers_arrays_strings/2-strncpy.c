#include "man.h"

/**
 * _strncpy - copies a string
 * @dest: char string pointer as argument
 * @src: char string pointer as argument
 * @n: int argument
 *
 * Description: copies a string
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
