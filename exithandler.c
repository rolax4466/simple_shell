#include "shell.h"

/**
 * exit_handler - handles exit from the shell
 *
 * @tokns: The tokens to exit from
 *
 * @line: The current line on the shell
 *
 * Return: Return nothing
 */

void exit_handler(char **tokns, char *line)
{
	int stats = 0;

	if (tokns[1] == NULL || (!_strcmp(tokns[1], "0")))
	{
		free_tok(tokns);
		free(line);
		exit(0);
	}

	stats = _atoi(tokns[1]);
	if (stats != 0)
	{
		free_tok(tokns);
		free(line);
		exit(stats);
	}
	else
	{
		_puts("exit: Incorrect number: ");
		_puts(tokns[1]);
		_puts("\n");
		exit(2);
	}
	free_tok(tokns);
	free(line);
	exit(EXIT_SUCCESS);
}
