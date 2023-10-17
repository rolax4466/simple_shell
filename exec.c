#include "shell.h"

/**
 * add_path - concatenate program name and a path
 *
 * @p_name: The path name to concatenate with the program name
 *
 * @program: The program name to put on the path name
 *
 * Return: The path name concatenated with the program.
 */

char *add_path(char *p_name, char *program)
{
	int path_len = 0;
	int new_size = 0;
	int program_len = 0;



	program_len = _strlen(program);
	path_len = _strlen(p_name);

	new_size = sizeof(char) * (path_len + program_len + 2);

	p_name = _realloc(p_name, (path_len + 1), new_size);

	if (!p_name)
		return (NULL);

	_strcat(p_name, "/");

	_strcat(p_name, program);

	return (p_name);
}





/**
 * execute - Executes a command
 *
 * @name: The command to execute
 *
 * @options: The options or flags to the command
 *
 * Return: integer status value
 */


int execute(char *name, char **options)
{
	int status;

	pid_t child;

	switch (child = fork())
	{
		case -1:
			perror("Error forking");
			return (-1);
			/*break;*/
		case 0:
			execve(name, options, environ);
			break;
		default:
			do {
				waitpid(child, &status, WUNTRACED);
			} while (WIFEXITED(status) == 0 && WIFSIGNALED(status) == 0);
	}
	return (0);
}
