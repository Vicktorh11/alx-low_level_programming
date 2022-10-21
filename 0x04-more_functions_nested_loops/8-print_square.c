#include "main.h"

/**
 * print_square - prints a square of size size
 * @size: size of square
 *
 * Return: void
 */


void print_square(int size)
{
	int i, c;

	for (i = 0; i < size; i++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		if (size <= 0)
			_putchar('\n');
		_putchar('\n');
	}
}
