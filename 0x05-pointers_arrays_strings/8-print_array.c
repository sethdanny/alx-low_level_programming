#include <stdio.h>
#include "main.h"

/**
  * print_array - print array elements seperated by comma and space
  * @a: array name
  * @n: number of elements in the array
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
		printf("\n");
}
