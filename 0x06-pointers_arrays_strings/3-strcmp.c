#include "main.h"

/**
  * _strcmp - function to compare two strings
  * @s1: string to compare
  * @s2: string to compare
  *
  * Return: Always 0 (Success)
  */

int _strcmp(char *s1, char *s2)
{
	int cmp;

	cmp = 0;
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (*s1 != *s2)
		cmp = *s1 - *s2;
	return (cmp);
}
