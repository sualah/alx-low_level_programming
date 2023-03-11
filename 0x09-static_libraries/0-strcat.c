#include "main.h"

/**
 * _strcat - a function that adds two strings
 *
 * @dest: final string ponter after concatenation
 * @src: string pointer to be concatenated
 *
 * Return: final string
 */
char *_strcat(char *dest, char *src)
{
	int len_src = 0;
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[len_src] != '\0')
	{
		dest[i + len_src] = src[len_src];
		len_src++;
	}
	return (dest);
}
