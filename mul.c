#include "monty.h"
/**
 * s_mul - multiplies the top two elements of the stack.
 * @head: head pointer
 * @lineNum: line counter
 * Return: nothing
*/
void s_mul(stack_t **head, unsigned int lineNum)
{
	stack_t *temp;
	int l = 0, curr;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", lineNum);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	curr = temp->next->n * temp->n;
	temp->next->n = curr;
	*head = temp->next;
	free(temp);
}
