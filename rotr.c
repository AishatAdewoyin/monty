#include "monty.h"
/**
  *s_rotr- rotates the stack to the bottom
  *@head: head pointer
  *@lineNum:line counter
  *Return: nothing
 */
void s_rotr(stack_t **head, __attribute__((unused)) unsigned int lineNum)
{
	stack_t *temp;

	temp = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = *head;
	temp->prev->next = NULL;
	temp->prev = NULL;
	(*head)->prev = temp;
	(*head) = temp;
}
