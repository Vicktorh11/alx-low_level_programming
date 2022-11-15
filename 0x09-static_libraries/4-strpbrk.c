#include "main.h"
#include <stdio.h>

/**
  * _strpbrk - function that searches for a string for any of a set of a byte
  * @s: string
  * @accept: substring
  *
  * Return: NULL
  */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
