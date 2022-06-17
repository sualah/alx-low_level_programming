#include "main.h"

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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
