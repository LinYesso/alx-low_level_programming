#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: double pointer to the list
 * @n: data to insert in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_;
	listint_t *tmp = *head;

	if (!head)
		return (NULL);

	new_ = malloc(sizeof(dlistint_t));
	if (!new_)
		return (NULL);

	new_->n = n;
	new_->next = NULL;

	if (*head == NULL)
	{
		new_->prev = NULL;
		*head = new_;
		return (new_);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new_;
	new_->prev = tmp;

	return (new_);
}
