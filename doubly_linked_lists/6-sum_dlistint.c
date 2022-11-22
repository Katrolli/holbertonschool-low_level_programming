#include "lists.h"

/**
 * sum_dlistint - function to count elements of list
 * @head: header of list
 * Return: the sum of the elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
