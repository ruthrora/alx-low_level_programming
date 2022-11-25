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
	list_t *newnode;

	newnode = *head;
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = str;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
