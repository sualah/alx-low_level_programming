#include <stdio.h>
#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
  unsigned long int set;

  if (index > (sizeof(unsigned long int) * 8 - 1))
    return (-1);
  set = ~(1 << index);
  *n = *n & set;
  return (1);
}
