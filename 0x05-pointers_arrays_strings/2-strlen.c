/**
 * _strlen - returns the length of string
 * @s: string argument
 *
 * Return: length of string as integer
 */
int _strlen(char *s)
{
	int str_len = 0;

	while (s[str_len] != '\0')
		str_len++;
	return str_len;
}
