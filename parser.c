#include "shell.h"


/*
 * @parser - extract tokens from strings
 * @string: The string to be tokenized
 *
 * @delim: The delimiter
 *
 * @length: The token number
 *
 * Return: The array of tokens of the string
 */


char **parser(char *string, char *delim, int len)
{
	char **tokens = NULL, *token = NULL, *temp = NULL;
	int j = 0;

	tokens = malloc(sizeof(char *) * (len + 1));
	if (!tokens)
		return (NULL);

	string = new_line(string);
	temp = _strdup(string);
	token = strtok(temp, delim);

	while (token)
	{
		tokens[j] = _strdup(token);
		token = strtok(NULL, delim);
		j++;
	}

	tokens[j] = NULL;
	free(temp);
	return (tokens);
}

