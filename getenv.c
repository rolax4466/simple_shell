#include "shell.h"


/**
 * getenv - Retrieves an environment variable
 *
 * @format: Variable to be retrieved
 *
 * Return: The content of the environment variable
 */

char *getenv(const char *format)
{
	int j = 0;

	char *envar = NULL;

	while (environ[j])
	{
		if (_strncmp(format, environ[j], _strlen(format)) == 0)
		{
			envar = _strdup(environ[j]);

			while (*envar != '=')
				envar++;
			++envar;
			return (envar);
		}
		j++;
	}
	return (NULL);
}
