#include "monty.h"
/**
 * s_add - adds the top two elements of the stack.
 * @head: head pointer
 * @lineNum: line counter
 * Return: nothing
*/
void s_add(stack_t **head, unsigned int lineNum)
{
	stack_t *temp;
	int len = 0, sum;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", lineNum);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	sum = temp->n + temp->next->n;
	temp->next->n = sum;
	*head = temp->next;
	free(temp);
}
