#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: destination memory area.
 * @src: what we are to copy.
 * @n: number of bytes to be filled.
 *
 * Return: Always 0 (success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
