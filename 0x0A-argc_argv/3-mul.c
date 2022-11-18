#include <stdio.h>
#include <stdlib.h>
/**
  * main - prints the name of the program
  * @argc: number of arguments passed in the program
  * @argv: arguments vector of pointers to the strings
  *
  * Return: 0 & 1
  */
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;
	printf("%d\n", c);
	return (0);
}
