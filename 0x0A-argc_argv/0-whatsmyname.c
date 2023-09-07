#include "main.h"
#include <stdio.h>

/**
 * main - its will print the  program's name follwed by newline
 * @argc: The number of command line arguments
 * @argv: the array containing the programs command line arguments
 *
 * Return: always (0)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

