#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: double pointer to the list
 * @n: data to insert in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_;

	if (!head)
		return (NULL);

	new_ = malloc(sizeof(dlistint_t));
	if (!new_)
		return (NULL);

	new_->n = n;
	new_->next = *head;
	new_->prev = NULL;

	if (*head)
		(*head)->prev = new_;

	*head = new_;

	return (new_);
}
