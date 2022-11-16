#include "lists.h"
/**
 * delete_nodeint_at_index - main func
 * @head: pointer to list
 * @index: index to delete
 * Return: returns 1 if success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *del;
	unsigned int  count = 0;

	if (*head == NULL)
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		ptr->next = NULL;
		free(ptr);
		return (1);
	}
	else
	{
		for (count = 0; count < index - 1; count++)
		{
			if (ptr == NULL)
				return (-1);
			ptr = ptr->next;
		}
		del = ptr->next;
		ptr->next = ptr->next->next;
		del->next = NULL;
		free(del);
		return (1);
	}
	return (-1);
}
