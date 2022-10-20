#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the start of the list
 *
 * Return: void
 */
 
void free_list(list_t *head)
{
	list_t *current;

	while (current != NULL)
	{
		current = head;
		head = current->next;
		free(current->str);
		free(current);
	}
}
