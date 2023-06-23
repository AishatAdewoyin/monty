#include "monty.h"
/**
 * s_queue - prints the top
 * @head: head pointer
 * @lineNum:line counter
 * Return: nothing
*/
void s_queue(stack_t **head, unsigned int lineNum)
{
	(void)head;
	(void)lineNum;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new value
 * @head: head pointer
 * Return: nothing
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new, *curr;

	curr = *head;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error\n");
	}
	new->n = n;
	new->next = NULL;
	if (curr)
	{
		while (curr->next)
			curr = curr->next;
	}
	if (!curr)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		curr->next = new;
		new->prev = curr;
	}
}
