#include "lists.h"
/**
 * add_dnodeint - function to count elements of list
 * @head: header of list
 * @n: data to add
 * Return: the count after iteration
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
	{
		head = malloc(sizeof(dlistint_t));
		(*head)->n = n;
		(*head)->next = NULL;
		(*head)->prev = NULL;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	(*head)->prev = new->next;
	*head = new;
	return (*head);
}
