#include "main.h"

/**
  * _strcat - concatenate two strings
  * @src: string to be concatenated
  * @dest: string to be concatenated
  *
  * Return: dest
  */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
