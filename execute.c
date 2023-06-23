#include "monty.h"
/**
* execute - executes the cmdcode
* @stack: head of stack
* @lineNum: line counter
* @file: pointer to monty file
* @content: line content
* Return: nothing
*/
int execute(char *content, stack_t **stack, unsigned int lineNum, FILE *file)
{
	instruction_t opst[] = {
				{"push", s_push}, {"pall", s_pall}, {"pint", s_pint},
				{"pop", s_pop},
				{"swap", s_swap},
				{"add", s_add},
				{"nop", s_nop},
				{"sub", s_sub},
				{"div", s_div},
				{"mul", s_mul},
				{"mod", s_mod},
				{"pchar", s_pchar},
				{"pstr", s_pstr},
				{"rotl", s_rotl},
				{"rotr", s_rotr},
				{"queue", s_queue},
				{"stack", s_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *cmd;

	cmd = strtok(content, " \n\t");
	if (cmd && cmd[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && cmd)
	{
		if (strcmp(cmd, opst[i].opcode) == 0)
		{	opst[i].f(stack, lineNum);
			return (0);
		}
		i++;
	}
	if (cmd && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", lineNum, cmd);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
