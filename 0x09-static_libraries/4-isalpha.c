#include "main.h"

/**
 * _isalpha - It checks for alphabetic characters.
 * @c: the character being checked.
 *
 * Return: 1 if c is a letter and 0 if not.
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
