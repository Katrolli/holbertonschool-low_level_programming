#include "lists.h"
/**
 * add_node - main func
 * @head: pointer to list
 * @str: old string to be copied
 * Return: add of new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;
	return (*head);
}
