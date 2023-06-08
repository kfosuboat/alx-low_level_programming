#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - It checks if a string is a palindrome.
 * @s: The string to reverse.
 *
 * Return: 1 if it is, 0 it isn't.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - This returns the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - This checks the characters recursively for a palindrome
 * @s: The string to be checked.
 * @i: The iterator.
 * @len: The total length of the string.
 *
 * Return: 1 if palindrome, 0 if no palindrome
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
