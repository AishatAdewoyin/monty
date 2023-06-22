#include "monty.h"
/**
 * s_addpstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @lineCount: lineCount
 * Return: no return
*/
void s_pstr(stack_t **head, unsigned int lineCount)
{
	stack_t *h;
	(void)lineCount;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
