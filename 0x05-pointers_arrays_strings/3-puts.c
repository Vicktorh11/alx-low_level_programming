#include "main.h"

/**
  * _puts - print strings to stdout
  * @str: string to be printed
  *
  * Return: void
  */

void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
