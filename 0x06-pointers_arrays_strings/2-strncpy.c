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
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
