#include "lists.h"
/**
 * insert_nodeint_at_index - main func
 * @head: pointer to list
 * @idx: index to insert
 * @n: element to insert
 * Return: returs the new pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *h;
	unsigned int count = 0;

	tmp = malloc(sizeof(listint_t));
	tmp->n = n;
	tmp->next = NULL;
	h = *head;
	if (idx == 0 && *head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		(*head)->n = n;
		(*head)->next = NULL;
		free(tmp);
		return (*head);
	}
	while (count != idx - 1)
	{
		if (h == NULL)
		{
			free(tmp);
			return (NULL);
		}
		h = h->next;
		count++;
	}
	if (h->next == NULL)
	{
		h->next = tmp;
		return (tmp);
	}
	tmp->next = h->next;
	h->next = tmp;
	return (tmp);
}
