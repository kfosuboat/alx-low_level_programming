#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters and assigns character c
 * @size: size of the array.
 * @c: character to assign.
 * Description: create array of size, size and assigns chararacter, c.
 *
 * Return: Return pointer to array, NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
