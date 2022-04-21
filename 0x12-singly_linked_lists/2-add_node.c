#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	unsigned int length = 0;

	while (str[length])
		length++;

	tmp = malloc(sizeof(list_t));
	if (!tmp)
		return (NULL);

	tmp->str = strdup(str);
	tmp->len = length;
	tmp->next = (*head);
	(*head) = tmp;

	return (*head);
}

