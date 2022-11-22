#include "lists.h"
/**
 * dlistint_len - function to count elements of list
 * @h: header of list
 * Return: the count after iteration
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
