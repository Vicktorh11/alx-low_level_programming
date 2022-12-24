#include "function_pointers.h"

/**
  * array_iterator - executes a function given as a parameteron each element of
  * an array
  * @size: size of the array
  * @action: pointer to the function needed to be used
  * @array: array to execute function on
  *
  * Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
