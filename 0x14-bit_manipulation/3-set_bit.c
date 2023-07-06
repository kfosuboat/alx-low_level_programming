#include "main.h"

/**
 * set_bit - This sets the value of a bit at a given index to 1.
 * @n: The pointer to the number to be changed.
 * @index: The index of the bit to be set to 1.
 *
 * Return: 1 on success and -1 on failure.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
