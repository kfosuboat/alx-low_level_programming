#include "main.h"

/**
 * _isdigit - It checks for a digit, that is 0 to 9.
 * @c: The integer to be checked.
 *
 * Return: 1 if c is a digit and 0 not.
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
