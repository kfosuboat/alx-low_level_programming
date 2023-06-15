#include "main.h"
#include <unistd.h>

/**
 * _putchar - This writes the character c to stdout.
 * @c: The character to be printed.
 *
 * Return: 1, on success.
 * On error, return -1, and set errno appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
