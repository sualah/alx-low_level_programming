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
	int i;
	char *endptr;
	long num;

	for (i = 1; i < argc; i++)
	{
		num = strtol(argv[i], &endptr, 10);

		if (*endptr == '\0' && !isspace(*argv[i]))
		{
			result += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", result);
	exit(EXIT_SUCCESS);
}
