#include "main.h"

/**
  * reverse_array - functions that reverse the content of an array integers
  * @a: integers
  * @n: number if element of the array
  *
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int i, b;

	i = 0;
	while (i < n)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		i++;
	}
}
