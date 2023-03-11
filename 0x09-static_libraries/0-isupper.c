#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: the character to check
 *
 * Return: 1 if the character is uppercase. 0 otherwise
 */
int _isupper(int c)
{
	char upper = 'A';
	int is_upper = 0;

	for (; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
			is_upper = 1;
			break;
		}
	}
	return (is_upper);
}
