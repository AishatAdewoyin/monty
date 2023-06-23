#include "monty.h"
/**
 * s_swap - Swaps the top two elements of the stack.
 * @s_head: head pointer
 * @lineNum: line number
 * Return: Nothing
*/
void s_swap(stack_t **s_head, unsigned int lineNum)
{
	stack_t *curr;
	int s_size = 0;
	int temp;

	curr = *s_head;
	while (curr)
	{
		curr = curr->next;
		s_size++;
	}
	if (s_size < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", lineNum);
		fclose(bus.file);
		free(bus.content);
		free_stack(*s_head);
		exit(EXIT_FAILURE);
	}
	curr = *s_head;
	temp = curr->n;
	curr->n = curr->next->n;
	curr->next->n = temp;
}
