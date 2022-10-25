#include "main.h"

/**
  * _strlen - checks the lenght of a string
  * @s: string to be checked
  *
  * Return: 0
  */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}	
