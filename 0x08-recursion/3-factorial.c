#include "main.h"

/**
  * factorial - prints the factorial of a number
  * @n: number to find factorial for
  * Return: -1 indicates an error
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
