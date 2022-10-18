#include <stdio.h>

/**
  * main - Entry
  *
  * Return: Always 0
  */

int main(void)
{
	/*numbers*/
	int i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	/*lowercase alphabets*/
	char l;

	l = 'a';
	while (l < 'g')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
