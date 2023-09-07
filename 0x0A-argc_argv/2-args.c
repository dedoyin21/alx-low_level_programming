#include "main.h"
#include <stdio.h>

/**
 * main - all arguments receives is prints.
 * @argc: The number of command line arguments
 * @argv: it is an array containing the program command line arguments
 *
 * Return: always (0)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

