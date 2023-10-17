#include "shell.h"

int BuiltinCommand(char **tokns, char *line)
{
	int j = 0;

	char *ListBuiltin[] = {"cd", "exit", "env", NULL};

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
					break;
				case 2:
					help();
					return (1);
					break;
				case 3:
					printenv();
					return (1);
					break;
				default:
					break;
			}
		}
		j++;
	}
	return (0);
}
