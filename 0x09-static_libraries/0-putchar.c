#include <unistd.h>

/**
 * _putchar - It writes the character, c to stdout.
 * @c: The character to be printed.
 *
 * Return: On success, 1
 * On error, return -1, and set errno appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
