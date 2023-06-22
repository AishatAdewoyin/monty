#include "monty.h"
/**
 * s_addpush - insert into the stack
 * @head: pointer to stack head
 * @lineCount: line number
 * Return: void
*/
void s_push(stack_t **head, unsigned int lineCount)
{
	int num, j = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", lineCount);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", lineCount);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	num = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, num);
	else
		addqueue(head, num);
}
