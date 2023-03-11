#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 *
 * @dest: first string pointed to be concatenated to
 * @src: string pointer to be concatenated to dest
 * @n: number of bytes from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int len_src = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (src[len_src] != '\0' && len_src < n)
	{
		dest[len + len_src] = src[len_src];
		len_src++;
	}
	return (dest);
}
