#include "lists.h"
/**
 * listint_len - main func
 * @h: pointer to list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t elem = 0;

	if (h == NULL)
		return (elem);
	while (h != NULL)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}
