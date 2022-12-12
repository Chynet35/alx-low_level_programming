#include "main.h"

/**
  * _strspn - a function that gets the length of a prefix substring
  *
  * @s: pointer to string input
  * @accept: substring prefix to look for
  *
  * Return: the number of bytes in the initial segment
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}

			b++;
		}

		a++;
	}

	return (t);
}
