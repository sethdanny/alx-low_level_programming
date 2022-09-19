#include "main.h"

/**
  * swap_int - swap values of two integers
  * @a: pointer to first value
  * @b: pointer to the second value
  */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
