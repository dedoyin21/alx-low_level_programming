#include "main.h"

/**
 * set_bit- it set the range of a bit to 1 at a given index
 * @n: pointer at a range
 * @index: input the argument
 * Return: 1 to indicate done and 0 to prove wrong.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1UL << index;

	if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}

	*n |= m;

	return (1);
}
