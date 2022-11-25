#include "lists.h"
#include <stdlib.h>

/**
 * *add_node -  adds a new node at the beginning of a list_t list.
 * @head: current place in the list
 * @str: char to add to the list
 *
 * Return: pointer to current position
 */
list_t *add_node(list_t **head, const char *str)
{
	char *mul;
	int len;
	list_t *newnode;

	newnode = malloc(sizeof(list_));
	if (newnode == NULL)
		return (NULL);

	mul = strdup(str);
	if (mul == NULL)
	{
		free(new);
		return (NULL);

	}
	for (len = 0; str[len];)
		len++;

	newmode->str = mul;
	newmode->len = len;
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
