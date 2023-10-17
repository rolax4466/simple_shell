#include "shell.h"

/**
 * printenv - Retrieves the environment variables
 *
 * Return: Nothing
 */

void printenv(void)
{
	int k = 0;
	int j = 0;

	while (environ[k])
	{
		j = 0;

		while (environ[k][j])
		{
			_putchar(environ[k][j]);
			j++;
		}

		if (j != 0)
			_putchar('\n');
		k++;
	}
}
