#include <stdio.h>
#include "main.h"

/**
 * _putchar - It writes the character, c to stdout.
 * @c: The character to be printed.
 *
 * Return: 1 (On success)
 * On error, Return -1 and set errno appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
