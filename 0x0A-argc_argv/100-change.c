#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int change(int num);

/**
 * change - return number of change
 * @num: number
 * Return: change
 */
int change(int num)
{
	int result = 0;

	if (num == 0)
		return (0);
	if (num >= 25)
		return (num / 25 + change(num % 25));
	if (num >= 10)
		return (num / 10 + change(num % 10));
	if (num >= 5)
		return (num / 5 + change(num % 5));
	if (num >= 2)
		return (num / 2 + change(num % 2));
	if (num >= 1)
		return (num / 1 + change(num % 1));
	return (result);
}
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
			result = change(atoi(argv[1]));
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
