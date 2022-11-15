#include "lists.h"
/**
 * sum_listint- main func
 * @head: pointer to list
 * Return: returs the sum of elements
 */
int sum_listint(listint_t *head)
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
