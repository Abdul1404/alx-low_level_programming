#include "lists.h"

/**
 * add_node_end - adds a new node to the end of linked list
 * @head: double pointer to a linked list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add, *current;
	int a;

	if (head == NULL)
		return (NULL);
	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	if (*head == NULL)
		*head = add;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = add;
	}
	add->next = NULL;
	add->str = strdup(str);
	for (a = 0; str[a] != '\0'; a++)/*strlem */
		;
	add->len = a;
	return (add);
}
