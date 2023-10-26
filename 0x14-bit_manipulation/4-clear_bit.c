#include "main.h"

/**
 * clear_bit- it set the value of the bit to 0 at a given index
 * @n: pointer to range
 * @index: input the argument
 * Return: 1 to indicate done and 0 to indicate error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1UL << index;

	if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}
	*n &= ~m;
	return (1);
}
