#include "lists.h"

/**
 * add_node_end -  a function that adds a new node at the end of a list_t list.
 * @head: pointer to the head of the list
 * @str: string
 *
 * Return: Always 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dupli;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dupli = strdup(str);

	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dupli;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
