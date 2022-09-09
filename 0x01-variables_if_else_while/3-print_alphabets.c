#include <stdio.h>

/**
  * main - print alphabets in lower case and uppercase
  * Return: 0 Always Success
  */
int main(void)
{
	char x;
	char i;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
