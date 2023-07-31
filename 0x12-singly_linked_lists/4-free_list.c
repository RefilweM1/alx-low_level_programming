#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees the linked list
 * @head: list_t list to be freed
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}