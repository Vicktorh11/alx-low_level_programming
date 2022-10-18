#include <stdio.h>

/**
  * main - Entry
  *
  * Return: Always 0
  */

int main(void)
{
	/*numbers*/
	char i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	/*lowercase alphabets*/

	i = 'a';
	while (i < 'g')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
