#include "main.h"

/**
 * binary_to_uint- converts bin to unsign interer
 * @b: this is pointer to input the binary number
 * Return: returns an unsign int.
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int j = 0;

	if (*b == '\0')
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		char newChar = b[i];

		if (newChar != '0' && newChar != '1')
		{
			return (0);
		}
		j = j * 2 + (newChar - '0');
		i++;
	}
	return (j);
}
