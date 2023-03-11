#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * main - entry point
 * @argc: argument count
 * @argv: array of arguments
 * Return: 1 if success and 0 otherswise
 */
int main(int argc, char **argv)
{
	int result = 0;

	if (argc == 2)
	{
		if (atoi(argv[1]) > 0)
		{
			result = atoi(argv[1]) / 25;
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", result);
	exit(EXIT_SUCCESS);
}
