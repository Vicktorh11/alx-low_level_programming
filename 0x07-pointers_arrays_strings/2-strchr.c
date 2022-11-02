#include "main.h"

/**
  * _strchr - locate string characters
  * @s: string
  * @c: cahracter
  *
  * Return: pointer
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
