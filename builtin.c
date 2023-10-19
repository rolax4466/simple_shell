#include "shell.h"

/**
 * BuiltinCommand - Executes a built-in command
 *
 * @tokns: the tokens
 *
 * @line: The line to check
 * Return: 1 for a builtin and 0 if not
 */


int BuiltinCommand(char **tokns, char *line)
{
	int j = 0;

	char *ListBuiltin[] = {"exit", "cd", "help", "env", NULL };

	while (ListBuiltin[j])
	{
		if (_strcmp(tokns[0], ListBuiltin[j]) == 0)
		{
			switch (j)
			{
				case 0:
					exit_handler(tokns, line);
					break;
				case 1:
					chdir(tokns[1]);
					return (1);
				case 2:
					help();
					return (1);
				case 3:
					printenv();
					return (1);
				default:
					break;
			}
		}
		j++;
	}
	return (0);
}
