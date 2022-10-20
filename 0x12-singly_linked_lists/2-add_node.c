#include "lists.h"

/**
 * add_node - adds a node to the beginning of a linked list
 * @head: double pointer to a lined list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	int a;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++) /* To get the length of the string */
		;
	add->str = strdup(str);
	if (add->str == NULL)
	{
		free(add);
		return (NULL);
	}
	add->len = a;
	add->next = *head;
	*head = add;
	return (*head);
}
