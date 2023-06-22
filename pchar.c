#include "monty.h"
/**
 * s_addpchar - prints the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @lineCount: lineCount
 * Return: no return
*/
void s_pchar(stack_t **head, unsigned int lineCount)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", lineCount);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", lineCount);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
