#include "lists.h"
/**
 * print_dlistint - function to print elements of list
 * @h: header of list
 * Return: the count after iteration
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (i);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
