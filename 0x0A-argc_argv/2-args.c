#include <stdio.h>
#include "main.h"

/**
 * main - It prints all arguments it receives
 * @argc: number of arguments received
 * @argv: array of arguments
 *
 * Return: Always return 0 (On Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
