#include "main.h"

/**
  * print_alphabet - Entry point
  *
  * Description - print all alphabet with _putchar
  *
  * Return: void
  */
void print_alphabet(void)
{
	char l;

	l = 'a';
	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
