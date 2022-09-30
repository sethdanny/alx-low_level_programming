#include <stdio.h>
#include "main.h"

/**
 * main - prints its name
 * @argc: number of arguments
 * @argv: arguments passed during execution
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
