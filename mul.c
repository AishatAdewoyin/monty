#include "monty.h"
/**
 * s_addmul - multiplies the top two elements of the stack.
 * @head: stack head
 * @lineCount: lineCount
 * Return: no return
*/
void s_mul(stack_t **head, unsigned int lineCount)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", lineCount);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
