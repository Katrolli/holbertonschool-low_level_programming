#include "lists.h"
/**
 * add_nodeint_end - main func
 * @head: pointer to list
 * @n: element to be added
 * Return: new pointer to new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *tmp;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
		*head = ptr;
	else
	{
		tmp = *head;
			while (tmp->next != NULL)
			{
				tmp = tmp->next;
			}
	tmp->next = ptr;
	}
	return (ptr);
}
