#include "main.h"

/**
 * _puts - It prints a string, then a new line, to stdout.
 * @str: string to print.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
