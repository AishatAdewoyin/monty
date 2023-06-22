#include "monty.h"
/**
  *s_addrotr- rotates the stack to the bottom
  *@head: stack head
  *@lineCount: lineCount
  *Return: no return
 */
void s_rotr(stack_t **head, __attribute__((unused)) unsigned int lineCount)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
