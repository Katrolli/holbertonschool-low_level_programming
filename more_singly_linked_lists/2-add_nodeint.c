#include "lists.h"
/**
 * add_nodeint - main func
 * @head: pointer to list
 * @n: element to be added
 * Return: new pointer to new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
