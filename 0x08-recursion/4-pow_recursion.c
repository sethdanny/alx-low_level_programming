#include "main.h"

/**
  * _pow_recursion - prints x to raise y
  * @x: value x to raise y
  * @y: value of y to raise the value of x
  * Return: -1 if y < 0 and 1 if y is 0
  * otherwise return x to power y
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
