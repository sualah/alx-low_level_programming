#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 4);
    printf("%s\n", concat);
    concat = string_nconcat(NULL, "School !!!", 0);
    printf("%s\n", concat);
    concat = string_nconcat("Best ", NULL, 0);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
