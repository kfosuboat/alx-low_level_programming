#include "main.h"

/**
 * factorial - This returns the factorial of a number.
 * @n: The number the factorial is to be returned from.
 *
 * Return: The factorial of n.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
