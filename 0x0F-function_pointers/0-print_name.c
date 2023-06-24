#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name
 * @name: name string
 * @f: function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
