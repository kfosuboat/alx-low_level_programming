#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - It returns the natural square root of a number.
 * @n: The number whose square root is being calculated.
 *
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - It recurses to find the natural
 * square root of a number.
 * @n: The number whose sqaure root is to be calculated.
 * @i: iterator
 *
 * Return: The resulting square root.
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
