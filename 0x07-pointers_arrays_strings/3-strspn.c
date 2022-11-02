#include "main.h"

/**
  * _strspn - gets the length of a prefix substring
  * @s: string
  * @accept: substrings
  *
  * Return: number of bytes in the initial segment
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *c = accept;

	while (*s++)
	{
		while (*accept++)
		{
			if (*(s - 1) == *(accept - 1))
			{
				i++;
				break;
			}
		}
		if (!(*--accept))
			break;
		accept = c;
	}
	return (i);
}
