#include "main.h"

/**
  * _memset - A function that fills memory with a constant byte
  * @s: pointer to the block of memory to fill
  * @b: variable of character to fill
  * @n: number of bytes to be filled
  *
  * Return: A pointer to the filled memory @s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
