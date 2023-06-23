#include "monty.h"
/**
  *s_rotl- rotates the stack to the top
  *@head: head pointer
  *@lineNum: line counter
  *Return: nothing
 */
void s_rotl(stack_t **head,  __attribute__((unused)) unsigned int lineNum)
{
	stack_t *temp = *head, *curr;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	curr = (*head)->next;
	curr->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = curr;
}
