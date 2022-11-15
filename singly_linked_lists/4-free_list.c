#include "lists.h"
/**
 * add_node_end - main func
 * @head: pointer to list
 * @str: old string to be copied
 * Return: add of new list
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
