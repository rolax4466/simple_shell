#include "shell.h"

/**
 * main - The entry point to the shell program
 *
 * Return: Always zero on success
 */

int main(void)
{
	int t_len = 0;
	ssize_t line_len = 0;
	int output = 0;
	size_t line_s = 0;
	char *line = NULL, **tokns = NULL;

	while (line_len >= 0)
	{
		signal(SIGINT, sig_handler);
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "Breeze& ", 8);
		line_len = getline(&line, &line_s, stdin);
		if (line_len == -1)
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			break;
		}
		t_len = input_count(line);
		if (line[0] != '\n' && t_len > 0)
		{
			tokns = parser(line, " \t", t_len);
			output = BuiltinCommand(tokns, line);
			if (!output)
			{
				tokns[0] = search(tokns[0]);
				if (tokns[0] && access(tokns[0], X_OK) == 0)
				{
					execute(tokns[0], tokns);
				}
				else
				{
					perror("./hsh");
				}
				free_tok(tokns);
			}
		}
	}
	free(line);
	return (0);
}
