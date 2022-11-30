#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data of linked list
 * @head: head of the list
 *
 * Return: always 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			amount += head->n;
			head = head->next;
		}
	}

	return (sum);
}
