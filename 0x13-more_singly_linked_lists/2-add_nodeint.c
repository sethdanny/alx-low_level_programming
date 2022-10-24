#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of the list
 * @head: pointer to the first node
 * @n: data to insert in the new node
 * Return: pointer to the new node with null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if(!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;

	return (*head);
}
