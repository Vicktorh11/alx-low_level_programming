#include "main.h"

/**
  * factorial - returns the factorial of given number
  * @n: number given
  *
  * Return: 0
  */

int factorial(int n)
{
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
