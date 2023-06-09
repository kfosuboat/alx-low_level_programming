#include <stdio.h>
#include "main.h"

/**
 * main - it prints the name of the program.
 * @argc: The number of arguments.
 * @argv: array of arguments.
 *
 * Return: Always return 0 (On success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
