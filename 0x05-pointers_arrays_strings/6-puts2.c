#include "main.h"

/**
  * puts2 - prints each character of a string, starting with the first line,
  * followed by a new line
  * @str: string to be printed
  *
  * Return: void
  */

void puts2(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
