#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a doubly linked list
 * @head: pointer to the list
 * @index: index of the node to return
 *
 * Return: address of the node, or if it does not exist, NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int ind = 0;

	if (!head)
		return (NULL);

	while (head && ind < index)
	{
		head = head->next;
		ind++;
	}

	if (head)
		return (head);

	return NULL;
}
