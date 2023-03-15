#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate arguments
 *
 * @ac: arguments count
 * @av: arguments array
 *
 * Return: character pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0;
	int x = 0;
	char *s;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; i < av[i][j]; j++)
			len++;
		len++;
	}
	len++;
	s = malloc(len * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{

		for (j = 0; j < av[i][j]; j++)
		{
			s[x] = av[i][j];
			x++;
		}
		s[x] = '\n';
		x++;
	}
	s[x] = '\0';
	return (s);
}
