#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0
  */

int main(void)
{
	int i, c;

	i = '0';
	c = ',';
	while (i <= '9')
	{
		putchar(i);
		i++;
		if (i != '9')
		{
			putchar(c );
		}
	}
	putchar('\n');
	return (0);
}
