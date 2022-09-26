#include "main.h"

/**
  * _memcpy - function that copies memory area
  *
  * @dest: buffer where we will copy to
  * @src: what we are to copy
  * @n: number of bytes to copy @src
  *
  * Return: Always 0 (Success)
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
