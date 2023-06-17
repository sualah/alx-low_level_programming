#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * validateInput - check if a string is a digit
 * @num: string
 * Return: number
 */
int validateInput(char *num)
{
	unsigned int i;

	for (i = 0; i < strlen(num); i++)
	{
		if (!isdigit(num[i]))
			return (0);
	}
	return (1);
}

/**
 * multiply - multiple two numbers
 * @num1: first number
 * @num2: second number
 * Return: product of num1 and num2
 */
int multiply(char *num1, char *num2)
{
	int i, j, start;
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int result_len = len1 + len2;
	int *result = (int *)malloc(result_len * sizeof(int));

	memset(result, 0, result_len * sizeof(int));
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			int digit1 = num1[i] - '0';
			int digit2 = num2[j] - '0';
			int product = digit1 * digit2;
			int pos1 = i + j;
			int pos2 = i + j + 1;
			int sum = product + result[pos2];

			result[pos1] += sum / 10;
			result[pos2] = sum % 10;
		}
	}
	start = 0;
	while (start < result_len && result[start] == 0)
	{
		start++;
	}
	if (start == result_len)
	{
		printf("0\n");
	} else
	{
		for (i = start; i < result_len; i++)
			printf("%d", result[i]);
		printf("\n");
	}
	free(result);
	return (0);
}

/**
 * main - entry point
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: 0 if success and 98 otherwise
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1 = argv[1];
	num2 = argv[2];
	if (!validateInput(num1) || !validateInput(num2))
	{
		printf("Error\n");
		return (98);
	}
	multiply(num1, num2);
	return (0);
}
