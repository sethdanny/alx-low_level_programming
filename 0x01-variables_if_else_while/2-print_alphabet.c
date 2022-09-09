#include <stdio.h>

/**
  * main - print alphabets
  * Return:0 Always success
  */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
