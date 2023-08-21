#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 *
 * @dest: character to pointer as destination
 * @src: character to pointer as source
 *
 * Return: destination as character pointer
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < len; i++)
		dest[i] = '\0';
	return (dest);
}
