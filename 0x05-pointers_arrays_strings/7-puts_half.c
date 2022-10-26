#include "main.h"

/**
  * puts_half - prints the last half of the character
  *@str: character to be divided
  *
  * Return: void
  */

void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (*(str + i))
		i++;
	j = i / 2;
	if (i % 2)
		j += 1;
	while (i > j)
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}
