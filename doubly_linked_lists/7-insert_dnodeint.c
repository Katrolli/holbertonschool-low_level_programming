#include "lists.h"

/**
 * insert_dnodeint_at_index - function to count elements of list
 * @h: header of list
 * @idx: index to add node
 * @n: data to be added
 * Return: the new added node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	tmp = *h;
	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (*h);
	}
	while (i < idx - 1)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	if (tmp->next == NULL)
	{
		new->prev = tmp;
		tmp->next = new;
		return (new);
	}
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;
	new->prev = tmp;
	return (tmp);
}
