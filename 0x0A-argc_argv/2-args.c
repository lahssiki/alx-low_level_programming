#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	printf("%s\n", argv[j]);

	return (0);
}
