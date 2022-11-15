#include "lists.h"
/**
 * pop_listint - main func
 * @head: pointer to list
 * Return: return the value of the old head node
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	ptr = *head;
	*head = (*head)->next;
	free(ptr);
	ptr = NULL;
	return (n);
}
