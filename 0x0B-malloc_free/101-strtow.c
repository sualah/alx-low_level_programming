#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - a function that splits a string into words.
 * @str: string pointer
 *
 * Return: string array
 */
char **strtow(char *str)
{
	int word_count = 0, word_index = 0, in_word = 0;
	int i = 0, j = 0, k = 0, word_length = 0;
	char **words;
	char *word;


	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			word_count++;
		}
	}
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	in_word = 0;
	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] == ' ')
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			int start = j;
			int end = start;
			while (str[end] != ' ' && str[end] != '\0')
			{
				end++;
			}
			word_length = end - start;
			word = (char *)malloc((word_length + 1) * sizeof(char));
			if (word == NULL)
			{
				for (k = 0; k < word_index; k++)
				{
					free(words[k]);
				}
				free(words);
				return (NULL);
			}

			strncpy(word, str + start, word_length);
			word[word_length] = '\0';
			words[word_index++] = word;
			in_word = 1;
		}
	}

	words[word_index] = NULL;

	return (words);
}

