#include <stdio.h>

/**
  * main - Prints all single digit numbers with putchar function from 0 to 9
  *
  * Return: Always (Success)
  */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
