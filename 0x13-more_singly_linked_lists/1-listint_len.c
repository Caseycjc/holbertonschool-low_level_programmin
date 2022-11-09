#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a list
 * @h: the head of the linked list
 *
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			count++;
		}
	}

	return (count);
}
