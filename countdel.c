#include "shell.h"


/**
 * count_dlms - Count the delimiters in a string
 *
 * @s: String containing the delimiters
 *
 * @del: Delimiters to find in the string
 *
 * Return: No of delimiters
 */


int count_dlms(char *s, char *del)
{
	int k = 0, j = 0, m = 0;

	while (del[k])
	{
		j = 0;
		while (s[j])
		{
			if (s[j] == del[k])
				m++;
			j++;
		}
		k++;
	}

	return (m);
}
