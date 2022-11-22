#include "lists.h"
/**
 * free_dlistint - function to count elements of list
 * @head: header of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
