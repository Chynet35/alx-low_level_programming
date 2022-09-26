#include "main.h"

/**
  * _strpbrk - a function that searches a string for any of a set of bytes
  *
  * @s: pointer to input string
  * @accept: pointer to string being search for @s
  *
  * Return: pointer to the bytes @s or NULL if not found
  */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
