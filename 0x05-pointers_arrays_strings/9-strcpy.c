#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies a string from one pointer to another and includes
 * terminating null byte ( \0 )
 * @dest: destination of string
 * @src: source
 *
 * Return: pointer to dest input parameter
*/

char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}
	dest[b] = '\0';

	return (dest);
}
