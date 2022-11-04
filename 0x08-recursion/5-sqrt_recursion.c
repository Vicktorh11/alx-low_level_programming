#include "main.h"
/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: number to be checked
  *
  * Return: 0
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  * _sqrt - square root function
  * @n: integer parameter
  * @i: integer parameter
  *
  * Return: 0
  */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (_sqrt(n, (i + 1)));
}
