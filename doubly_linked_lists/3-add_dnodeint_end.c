#include "lists.h"
/**
 * add_dnodeint_end - function to count elements of list
 * @head: header of list
 * @n: data to add
 * Return: the count after iteration
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	tmp = *head;
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	while (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
