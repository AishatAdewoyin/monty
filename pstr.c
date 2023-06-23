#include "monty.h"
/**
 * s_pstr - prints the string starting at the top of the stack
 * @head: head pointer
 * @lineNum: line counter
 * Return: nothing
*/
void s_pstr(stack_t **head, unsigned int lineNum)
{
	stack_t *temp;
	(void)lineNum;

	temp = *head;
	while (temp)
	{
		if (temp->n > 127 || temp->n <= 0)
		{
			break;
		}
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}
