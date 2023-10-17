#include "shell.h"

/**
 * _strncmp - Compares the first n bytes if str1 and str2
 *
 * @str1: First string
 *
 * @str2: Second string
 *
 *@lim: The limit of comparison
 *
 * Return: the int value
 */

int _strncmp(const char *str1, const char *str2, size_t lim)
{
	int dif = 0;
	unsigned int plc = 0;


	while (plc < lim)
	{
		if (str1[plc] == str2[plc])
		{
			plc++;
			continue;
		}
		else
		{
			dif = str1[plc] - str2[plc];
			break;
		}
		plc++;
	}
	return (dif);
}

