#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates and initializes an array of characters with a specific character.
 * @c: The character to initialize the array with.
 * @size: The number of elements (bytes) to allocate for the array.
 *
 * Return: A pointer to the created array or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
