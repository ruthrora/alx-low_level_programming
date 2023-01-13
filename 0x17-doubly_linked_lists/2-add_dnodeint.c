#include "lists.h"
 /**
  * add_dnodeint -  adds a new node at the beginning of a list
  * @head:pointer to head of list
  * @n: integer of new node
  * Return: always 0
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	if (*head != NULL)
		(*head)->prev = newnode;
	*head = newnode;

	return (newnode);
}
