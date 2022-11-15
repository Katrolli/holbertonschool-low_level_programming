#include "lists.h"
/**
 * pop_listint - main func
 * @head: pointer to list
 * Return: return the value of the old head node
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n = (*head)->n;

	if (*head == NULL)
		return (0);
	ptr = *head;
	*head = (*head)->next;
	free(ptr);
	ptr = NULL;
	return (n);
}
