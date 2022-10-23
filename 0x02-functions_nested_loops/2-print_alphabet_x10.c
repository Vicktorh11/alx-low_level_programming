#include "main.h"

/**
  * print_alphabet_x10 - prints all alphabets ten times, followed by a new line
  *
  * Return: void
  */

void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;
	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		i++;
		_putchar('\n');
	}
}
