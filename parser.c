#include "shell.h"


/**
 * parser - extract tokens from a string
 * @string: String to be tokenised
 * @delim: The delimiter of the tokens
 * @len: Number of tokens
 *
 * Return: Array of tokens of the string
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

