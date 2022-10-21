#include "main.h"

/**
  * more_numbers - print multiple outputs
  *
  * Return: void
  */

void more_numbers(void)
{
	int i;

	i = 0;
	do {
		while (i <= 14)
		{
			_putchar(i);
			i++;
		}
	} while (i <= 10);
	_putchar('\n');
}
