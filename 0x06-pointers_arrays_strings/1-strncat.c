#include "main.h"
#include <string.h>

/**
  * _strncat - function that concatenates two strings
  * @dest: string to be concatenated
  * @src: string to be concatenated
  * @n: number of bytes
  *
  * Return: Always 0 (Success)
  */

char *_strncat(char *dest, char *src, int n)
{
	int index = strlen(dest);
	int i = 0;

	while (i < n && *src)
	{
		dest[index + i] = *src;
		src++;
		i++;
	}
	dest[index + i] = '\0';
	return (dest);
}
