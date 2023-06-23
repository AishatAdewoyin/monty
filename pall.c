#include "monty.h"
/**
 * s_pall - prints the element of stack
 * @head:  head pointer
 * @lineNum: unused parameter
 * Return: nothing
*/
void s_pall(stack_t **head, unsigned int lineNum)
{
	stack_t *temp;
	(void)lineNum;

	temp = *head;
	if (temp == NULL)
		return;
	for (; temp != NULL; temp = temp->next)
		printf("%d\n", temp->n);
}
