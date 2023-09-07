#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - duplicates the provided string
 * @str: string to be duplicate
 *
 * Return: a pointer to the duplicated string (Successfully), NULL (Error)
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	while ((duplicate[i] = str[i]) != '\0')
		i++;

	return (duplicate);
}

