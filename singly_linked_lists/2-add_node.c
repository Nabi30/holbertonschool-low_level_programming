#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - Returns the length of a string.
 * @str: The string to measure.
 *
 * Return: The length of the string.
 */
size_t _strlen(const char *str)
{
size_t length = 0;
while (str[length])
length++;
return (length);
}

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be duplicated and added to the list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
char *dup_str;

if (str == NULL || head == NULL)
return (NULL);

dup_str = strdup(str);
if (dup_str == NULL)
return (NULL);

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
free(dup_str);
return (NULL);
}

new_node->str = dup_str;
new_node->len = _strlen(dup_str);
new_node->next = *head;
*head = new_node;

return (new_node);
}
