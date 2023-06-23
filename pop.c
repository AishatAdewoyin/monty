#include "monty.h"
/**
 * s_pop - prints the top
 * @head: head pointer
 * @lineNum: line number
 * Return: nothing
*/
void s_pop(stack_t **head, unsigned int lineNum)
{
	stack_t *temp;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", lineNum);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	*head = temp->next;
	free(temp);
}
