#include "shell.h"

/**
 * free_tok - frees the memory from the tokens
 * @tokns: The tokens to be freed
 *
 * Return: returns nothing
 */

void free_tok(char **tokns)
{
	char **temp = tokns;

	if (tokns)
	{
		while (*tokns)
			free(*tokns++);

		free(temp);
	}
}

/**
 * free_getenv - Frees the environment variable
 *
 * @env_path: Evironment variable to free
 *
 * Return: return nothing
 */

void free_getenv(char *env_path)
{
	int j;

	for (j = 4; j >= 0; j--)
		env_path--;

	free(env_path);
}
