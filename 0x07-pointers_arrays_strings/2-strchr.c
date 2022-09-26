#include "main.h"

/**
  * _strchr - a function that locates a character in a string
  *
  * @s: pointer to our string array input
  * @c: character to find from input array
  *
  * Return: the string from character found
  */

char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
