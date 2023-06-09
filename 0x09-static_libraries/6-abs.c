#include "main.h"

/**
 * _abs - It computes the absolute value of an integer.
 * @n: the integer whose absolute value is to be checked.
 *
 * Return: the absolute value of integer.
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
