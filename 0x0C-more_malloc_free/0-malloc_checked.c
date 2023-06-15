#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - It allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 *
 * Return: Return a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
