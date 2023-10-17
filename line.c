#include "shell.h"

/**
 * new_line - Removes a trailing new line from a string
 *
 * @s: The string to remove the new line
 *
 * Return: The string with the new line character
 */

char *new_line(char *s)
{
	int j = 0;

	while (s[j])
	{
		if (s[j] == '\n')
			s[j] = '\0';
		j++;
	}

	return (s);
}
