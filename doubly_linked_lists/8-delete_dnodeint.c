#include "lists.h"

/**
 * delete_dnodeint_at_index - function to count elements of list
 * @h: header of list
 * @idx: index to add node
 * Return: the new added node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *del;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next->next;
		tmp->next = NULL;
		tmp->prev = NULL;
		free(tmp);
		return (1);
	}
	else
	{
		for (count = 0; count < index - 1; count++)
		{
			if (tmp == NULL)
				return (-1);
			tmp = tmp->next;
		}
		del = tmp->next;
		tmp->next = tmp->next->next;
		del->next = NULL;
		free(del);
		return(1);
	}
	return (-1);
}
