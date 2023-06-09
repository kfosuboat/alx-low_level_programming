#include "main.h"

/**
 * _memset - fills  blocks of memory with  specific values.
 * @s: The starting address of memory to be filled.
 * @b: the wanted value.
 * @n: The number of bytes to be changed.
 *
 * Return: A changed array with a new value for n bytes.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
