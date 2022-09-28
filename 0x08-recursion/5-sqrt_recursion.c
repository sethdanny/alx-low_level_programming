#include "main.h"

/**
 *  _sqrt_recursion - prints the square of an integer
 *  @n: integer number to find square of
 *  Return: -1 if n is < 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (_sqrt_recursion(n - 1) + 2 * n - 1);
}
