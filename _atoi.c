#include "shell.h"

/**
 * _atoi - Converts a string to integer
 *
 * @str: The string to be  convert
 *
 * Return: A integer
 */

int _atoi(char *str)
{
	int min = 1;
	int flag = 0;
	int pos = 0;
	unsigned int res = 0;

	while (str[pos])
	{
		if (str[pos] == '-')
			min *= -1;

		while (str[pos] >= '0' && str[pos] <= '9')
		{
			flag = 1;
			res = (res * 10) + (str[pos] - '0');
				pos++;
		}

		if (flag == 1)
			break;
		pos++;
	}

	res *= min;
	return (res);
}
