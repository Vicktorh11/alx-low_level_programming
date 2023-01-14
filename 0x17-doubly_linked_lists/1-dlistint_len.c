#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of element in the linked list
 * @h: pointer to the start of a linkeed list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
