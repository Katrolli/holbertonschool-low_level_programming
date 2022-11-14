#include "lists.h"
/**
 * add_node_end - main func
 * @head: pointer to list
 * @str: old string to be copied
 * Return: add of new list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last_n;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last_n = *head;
		while (last_n->next != NULL)
		{
			last_n = last_n->next;
		}
		last_n->next = new;
	}
	return (new);
}
