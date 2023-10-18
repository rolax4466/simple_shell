#include "shell.h"


/**
 * search - finds if the command is found in the system
 *
 * @name: The command to find in the system
 *
 * Return: Path name of the command or  NULL if failed
 */

char *search(char *name)
{
	char *env_path = NULL, **p_tokns = NULL;
	int j = 0, num_del = 0;
	struct stat sb;

	if (name)
	{
		if (stat(name, &sb) != 0 && name[0] != '/')
		{
			env_path = getenv("PATH");
			num_del = count_dlms(env_path, ":") + 1;

			p_tokns = parser(env_path, ":", num_del);

			while (p_tokns[j])
			{
				p_tokns[j] = add_path(p_tokns[j], name);

				if (stat(p_tokns[j], &sb) == 0)
				{
					free(name);
					name = _strdup(p_tokns[j]);
					free_getenv(env_path);
					free_tok(p_tokns);
					return (name);
				}

				j++;
			}

			free_getenv(env_path);
			free_tok(p_tokns);
		}

		if (stat(name, &sb) == 0)
			return (name);
	}

	free(name);
	return (NULL);
}
