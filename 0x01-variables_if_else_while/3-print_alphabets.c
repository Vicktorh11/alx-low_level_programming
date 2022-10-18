#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0
  */
int main(void)
{
	char l;

	/*lowercase alphabet*/
	l = 'a';
	while (l <= 'z')
	{
		putchar(l);
		l++;
	}

	/*uppercase alphabets*/
	l = 'A';
	while (l <= 'Z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
