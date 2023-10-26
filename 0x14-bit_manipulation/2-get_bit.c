#include "main.h"

/**
 * get_bit- recall a bit value at a given index
 * @n:is the argument
 * @index: input the integer index
 * Return: integer bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit = 0;

	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	while (index > 0)
	{
		n >>= 1;
		index--;
	}
	bit = n & 1;

	return (bit);
}
