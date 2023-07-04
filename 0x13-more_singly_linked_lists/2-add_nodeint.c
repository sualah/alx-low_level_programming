#include "lists.h"
#include <string.h>

/**
 * add_nodeint - A function that adds a new nod at the begining of a list
 * @head: A pointer to list_t structure
 * @n: node value
 * Return: the address of the new element on success, or NULL therwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp_node;

	temp_node = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = temp_node;
	return (*head);
}
