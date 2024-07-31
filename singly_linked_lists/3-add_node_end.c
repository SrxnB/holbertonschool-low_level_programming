#include "lists.h"

/**
 * _strlen - len;
 * @s: str
 * Return: len
 */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}


/**
*add_node_end - add a new node to the list
*@head: head pointer
*@str: data of node
*Return: pointer to new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = *head, *newnode;

	newnode = malloc(sizeof(list_t));

	if (newnode)
	{
		newnode->str = strdup(str);
		newnode->len = _strlen(str);
		newnode->next = NULL;

		if (*head == NULL)
		{
			*head = newnode;
		}
		else
		{
			while (tmp->next != NULL)
				tmp = tmp->next;

			tmp->next = newnode;
		}
		return (newnode);

	}
	return (NULL);

}
