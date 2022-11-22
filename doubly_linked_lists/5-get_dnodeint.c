#include "lists.h"
/**
 * get_dnodeint_at_index - function to count elements of list
 * @head: header of list
 * @index: position of node to display
 * Return: the node of index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	while (head == NULL)
		return (NULL);
	count = 0;
	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (head);
}
