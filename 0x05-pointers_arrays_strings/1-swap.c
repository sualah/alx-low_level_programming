/**
 * swap_int - swap the value of two integers
 * @a: pointer to first integer argument
 * @b: pointer to second integer argument
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int value_of_a = *a;
	*a = *b;
	*b = value_of_a;
}
