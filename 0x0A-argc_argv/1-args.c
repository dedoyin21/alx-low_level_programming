#include "main.h"
#include <stdio.h>

/**
 * main - the number of arguments passed into it is print.
 * @argc: The number of command line arguments
 * @argv: its is an array containing the program command line arguments
 *
 * Return: (0) always
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

