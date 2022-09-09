#include <stdio.h>

/**
  * main - print numbers
  * followed by a new line
  * Return: 0 Always success
  */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}
