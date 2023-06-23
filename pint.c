#include "monty.h"
/**
 * s_pint - prints the top
 * @head: head pointer
 * @lineNum: line number
 * Return: nothing
*/
void s_pint(stack_t **head, unsigned int lineNum)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", lineNum);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
