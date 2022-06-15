#include "main.h"

/**
 * *_strcat - concat two strings
 * @dest: first string  argument
 * @src: second string argument
 *
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
