#include "main.h"

/**
  * print_line - to print straight in the terminal
  * @n: number of times the character should be printed
  *
  * Return: void
  */

void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (n <= 0)
			_putchar('\n');
		else
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
