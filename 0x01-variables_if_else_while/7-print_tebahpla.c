#include <stdio.h>

/**
  * main - print alphabets in reverse order
  * Return: 0 Always Success
  */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
		putchar(n);
	putchar('\n');
	return (0);
}
