#include "monty.h"
/**
  *s_sub- substration of two elements
  *@head: stack head pointer
  *@lineCount: line counter
  *Return: nothing
 */
void s_sub(stack_t **head, unsigned int lineCount)
{
	stack_t *curr;
	int sub, n;

	curr = *head;
	for (n = 0; curr != NULL; n++)
		curr = curr->next;
	if (n < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", lineCount);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	curr = *head;
	sub = curr->next->n - curr->n;
	curr->next->n = sub;
	*head = curr->next;
	free(curr);
}
