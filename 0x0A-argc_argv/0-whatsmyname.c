#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
