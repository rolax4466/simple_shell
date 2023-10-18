#include "shell.h"

/**
 * _strlen - Counts a string length
 *
 * @str: The string to count
 *
 * Return: Length of the counted string
 */

int _strlen(const char *str)
{
	int j = 0;

	while (str[j])
		j++;

	return (j);
}

/**
 * _strdup - it duplicates a string
 *
 * @string: string to duplicate
 *
 * Return: The duplicated string
 */

char *_strdup(char *string)
{
	int index = 0, len = 1;
	char *dupstr;

	if (string == NULL)
		return (NULL);

	len = _strlen(string);
	dupstr = malloc((sizeof(char) * len) + 1);
	if (dupstr == NULL)
		return (NULL);

	while (index < len)
	{
		dupstr[index] = string[index];
		index++;
	}

	dupstr[index] = '\0';
	return (dupstr);
}

/**
 * _strcmp - it compares two strings
 *
 * @str1: first string
 *
 * @str2: second string
 *
 * Return: The integer value
 */
int _strcmp(char *str1, char *str2)
{
	int pos = 0;
	int dif = 0;

	while (str1[pos] != '\0' && str2[pos] != '\0')
	{
		if (str1[pos] == str2[pos])
		{
			pos++;
		}
		else 
		{
			dif = str1[pos] - str2[pos];
			break;
		}
	}
	return dif;
}

/**
 * _strcat - it concatenates two strings
 *
 * @dst: String destination
 *
 * @src: string source
 * Return: Pointer to resulting string destination
 */

char *_strcat(char *dst, char *src)
{
	int lend = 0;
	int j = 0;

	while (dst[lend])
		lend++;

	for (j = 0; src[j] != '\0'; j++)
	{
		dst[lend] = src[j];
		lend++;
	}

	dst[lend] = '\0';
	return (dst);
}
