#ifndef OPERATIONS_H
#define OPERATIONS_H
#include <stdio.h>
#include <stdlib.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int my_div(int a, int b) __attribute__((alias("div")));
int mod(int a, int b);
#endif
