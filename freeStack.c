#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @head: head pointer
*/
void free_stack(stack_t *head)
{
	stack_t *curr;

	curr = head;
	while (head)
	{
		curr = head->next;
		free(head);
		head = curr;
	}
}
