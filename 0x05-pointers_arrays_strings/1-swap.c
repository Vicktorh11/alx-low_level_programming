#include "main.h"

/**
* swap_int - swaps the value of two integer a & b
* @a: integer to be swaped
* @b: integer to be swaped
*
* Return: void
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
