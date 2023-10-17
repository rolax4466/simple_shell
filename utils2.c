#include "shell.h"


/**
 * _putchar -Writes a char to stdout
 *
 * @t: character to print
 *
 * Return: On success 1 and -1 on failure
 */

int _putchar(char t)
{
	return (write(1, &t, 1));
}



/**
 * _puts - Prints a string to stdout
 *
 * @s: String to print
 *
 * Return: Nothing to return
 */

void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}

	_putchar('\n');
}
