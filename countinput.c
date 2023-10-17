#include "shell.h"

/**
 * input_count - Count wors entered by the user
 *
 * @string: The string to be counted
 *
 * Return: Number of words counted
 */

int input_count(char *string)
{
	int j = 0;
	int k = 0;
	int stat = 0;

	while (string[j])
	{
		if (string[j] == ' ' || string[j] == '\n' || string[j] == '\t')
			stat = 0;
		else if (stat == 0)
		{
			stat = 1;
			k++;
		}
		j++;
	}

	return (k);
}
