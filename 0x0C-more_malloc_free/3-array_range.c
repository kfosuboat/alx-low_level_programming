#include <stdlib.h>
#include "main.h"

/**
 * *array_range - Creates an array of integers.
 * @min: The minimum range of values stored.
 * @max: The maximum range of values stored and also, number of elements.
 *
 * Return: The pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
