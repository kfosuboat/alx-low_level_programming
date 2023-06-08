#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes character, c to stdout
 * @c: The character to be printed
 *
 * Return: On success, 1.
 * On error, return -1, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
