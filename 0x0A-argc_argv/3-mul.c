#include <stdio.h>
#include "main.h"

/**
 * main - multiples two integers using atoi function
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: (1): if no arguments are passed and 0 otherwise
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1] * argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}