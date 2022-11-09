#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a list
 * @head: head of a linked list
 *
 * Return: all the data of a list or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int amount = 0;

	if (head)
	{
		while (head)
		{
			amount += head->n;
			head = head->next;
		}
	}

	return (amount);
}
