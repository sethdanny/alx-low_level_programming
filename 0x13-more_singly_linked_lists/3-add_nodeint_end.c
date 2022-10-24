#include "lists.h"

/**
 * add_nodeint_end - adds data at the end of the node
 * @head: pointer to the first node
 * @n: data to be inserted in the new node at the end
 * of the list
 * Return: pointer to the address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp = *head;

	ptr = malloc(sizeof(listint_t));

	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = ptr;

	return (ptr);
}
