#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node to the end of list
 * @head: A pointer to list structure
 * @n: node value
 * Return: address of new element, or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node, *temp;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	if (*head == NULL)
	{
		n_node->next = *head;
		*head = n_node;
	}
	else
	{
		n_node->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = n_node;
	}
	return (n_node);
}
