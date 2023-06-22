#include "monty.h"
/**
 * s_addswap - Swaps the top two elements of the stack.
 * @s_addhead: Pointer to the stack head
 * @lineCount: line number
 * Return: No return value
*/
void s_swap(stack_t **s_head, unsigned int lineCount)
{
	stack_t *curr_node;
	int s_size = 0;
	int temp;

	curr_node = *s_head;
	while (curr_node)
	{
		curr_node = curr_node->next;
		s_size++;
	}
	if (s_size < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", lineCount);
		fclose(bus.file);
		free(bus.content);
		free_stack(*s_head);
		exit(EXIT_FAILURE);
	}
	curr_node = *s_head;
	temp = curr_node->n;
	curr_node->n = curr_node->next->n;
	curr_node->next->n = temp;
}
