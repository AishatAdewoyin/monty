#include "monty.h"
/**
  *s_addrotl- rotates the stack to the top
  *@head: stack head
  *@lineCount: lineCount
  *Return: no return
 */
void s_rotl(stack_t **head,  __attribute__((unused)) unsigned int lineCount)
{
	stack_t *tmp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
