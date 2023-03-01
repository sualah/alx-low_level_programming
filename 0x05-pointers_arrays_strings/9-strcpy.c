#include "main.h"

/**
 * *strcpy - a function that copies the string pointed to by src
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

	for (i = 0; i < len; i++)
	{
		if (i == len - 1)
			dest[i] = '\0';
		dest[i] = src[i];
	}
	return (dest);
}
