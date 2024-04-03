#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be duplicated and added to the list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *n_node;
char *dup_str;

if (str == NULL || head == NULL)
return (NULL);

dup_str = strdup(str);
if (dup_str == NULL)
return (NULL);

n_node = malloc(sizeof(list_t));
if (n_node == NULL)
{
free(dup_str);
return (NULL);
}

n_node->str = dup_str;
n_node->len = strlen(dup_str);
n_node->next = *head;
*head = n_node;

return (n_node);
}
