#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0
  */
int main(void)
{
	/*lowercase alphabet*/
	char l;

	l = 'a';
	while (l <= 'z')
	{
		putchar(l);
		l++;
	}

	/*uppercase alphabets*/
	char L;

	L = 'A';
	while (L <= 'Z')
	{
		putchar(L);
		L++;
	}
	putchar('\n');
	return (0);
}
